#include "SimRunnerThread.h"

#include <iostream>

bool SimRunnerThread::rerunFlag = false;

SimRunnerThread::SimRunnerThread(int ID, Barrier* barrier): threadID(ID), barrier(barrier)
{
}


SimRunnerThread::~SimRunnerThread()
{
}

void SimRunnerThread::stepAllNets() {
	for (unsigned i = 0; i < engine->get_net_count(); i++) {
		NetFlow* net = engine->get_net(i);
		net->step_time(engine->get_current_time());
	}
}

void SimRunnerThread::synch_threads() {
	barrier->synch_threads();
}

void SimRunnerThread::step_time()
{
	if (threadID == 0) {
		stepAllNets();
	}

	while (need_to_rerun_ts()) {
#if VERBOSE > 0
		printf("Running TS: %ld", engine->__time__);
		fflush(stdout);
#endif
		if (threadID == 0) {		// Only MASTER-thread enter...
			step_delta();			// Stepping delta (MASTER-thread only) (clear rerun flags in nets.)
		}

		synch_threads();			// Other threads wait the MASTER-thread
		process_primitives(engine->get_current_time());
#if VERBOSE > 0
		printf("   [  OK  ]\n");
		fflush(stdout);
#endif

	}

	if (threadID == 0) {
		engine->__time__++;
	}
	return;


}


//void SimRunnerThread::run(simtime_t time) {
//	/*runUntil = engine->get_current_time() + time;
//	my_worker_thread = new std::thread([this] { __run__(); });*/
//	//run_to(engine->get_current_time() + time);
//}

void SimRunnerThread::__run__() {
	bool expandNets;
	try {
		while (runUntil > engine->get_current_time()) {
			try {
				step_time();
			}
			catch (exception_code_t code)
			{
				if (code == NET_FLOW_VECTOR_IS_FULL) {
					expandNets = true;
				}
				
				// catch anything thrown within try block that derives from std::exception
				std::cerr << "SimRunnerThread::__run__() exception code: " << code << std::endl;
				exit(-1);
			}
			synch_threads();
			if (true == expandNets) {
				if (threadID == 0) {
					printf("Expanding nets during running...\n");
					engine->expand_all_nets();
					expandNets = false;
				}
			}
			synch_threads();
		}
	}
	catch (exception_code_t code)
	{
		// catch anything thrown within try block that derives from std::exception
		std::cerr << "SimRunnerThread::__run__() exception code: " << code << std::endl;
		exit(-1);
	}
	catch (char* str)
	{
		// catch anything thrown within try block that derives from std::exception
		std::cerr << "SimRunnerThread::__run__() exception char*: " << str << std::endl;
		exit(-1);
	}
	catch (...)
	{
		// catch anything thrown within try block that derives from std::exception
		std::cerr << "SimRunnerThread::__run__()2 "  << std::endl;
		exit(-1);
	}
}

void SimRunnerThread::run_to(simtime_t time) {
	while (time > engine->get_current_time()) {
		step_time();
	}
}

void SimRunnerThread::step_delta() {
	for (unsigned i = 0; i < engine->get_net_count(); i++) {
		engine->get_net(i)->step_delta();
	}
}


//void SimRunnerThread::process_primitives_thread(base::Vector<Primitive*>* my_primitives, simtime_t time) {
//	for (unsigned i = 0; i < my_primitives->size(); i++) {
//		my_primitives->get(i)->calculate(time);
//	}
//}


void SimRunnerThread::process_primitives(simtime_t time) {
#if VERBOSE == 1
	printf("processing primitives from %u to %u /n", processPrimitivesFrom, processPrimitivesToPlusOne);
#endif
	for (unsigned i = processPrimitivesFrom; i < processPrimitivesToPlusOne; i++) {
		engine->get_primitive(i)->calculate(time);
	}
}


bool SimRunnerThread::fetch_need_to_rerun_ts() {
	for (unsigned i = 0; i < engine->get_net_count(); i++) {
		if (engine->get_net(i)->get_use_in_event()) {
			if (engine->get_net(i)->get_change_flag()) {
#if VERBOSE > 0
				printf("The %d  %s changed.\n", i, engine->get_net(i)->get_name());
#endif
				return true;
			}
		}
	}
	return false;
}

bool SimRunnerThread::need_to_rerun_ts() {
	synch_threads();
	if (threadID == 0) {
		rerunFlag = fetch_need_to_rerun_ts();
	}
	synch_threads();
	return rerunFlag;
}