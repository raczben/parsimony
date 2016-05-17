#include "SimRunnerThread.h"

#include <iostream>

bool SimRunnerThread::globalRerunFlag[2] = { false, false };
bool SimRunnerThread::globalRunFlag[2] = { false, false };
//bool SimRunnerThread::rerunFlag = false;

SimRunnerThread::SimRunnerThread(int ID, Barrier* barrier): threadID(ID), barrier(barrier)
{
}


SimRunnerThread::~SimRunnerThread()
{
}

bool SimRunnerThread::stepAllNets() {
	bool localChangeFlag = false;
	if (threadID == 0) {
		for (unsigned i = 0; i < engine->get_net_count(); i++) {
			if (engine->get_net(i)->step_time(engine->get_current_time())) {
				localChangeFlag = true;
			}
		}
	}
	return localChangeFlag;
}

void SimRunnerThread::synch_threads() {
	barrier->synch_threads();
}

void SimRunnerThread::step_time()
{
	bool localNeedToRun;
	localNeedToRun = stepAllNets();

	set_global_run_flag(localNeedToRun);
	synch_threads();

	
	if (need_to_run_ts()) {

		bool localNeedToRerun;


		do {
#if VERBOSE > 0
			printf("Running TS: %ld", engine->__time__);
			fflush(stdout);
#endif

			localNeedToRerun = process_primitives(engine->get_current_time());
			set_global_rerun_flag(localNeedToRerun);
			synch_threads();

#if VERBOSE > 0
			printf("   [  OK  ]\n");
			fflush(stdout);
#endif

		} while (need_to_rerun_ts2());
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
	bool expandNets = false;
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

/*void SimRunnerThread::step_delta() {
	for (unsigned i = 0; i < engine->get_net_count(); i++) {
		engine->get_net(i)->step_delta();
	}
}*/


//void SimRunnerThread::process_primitives_thread(base::Vector<Primitive*>* my_primitives, simtime_t time) {
//	for (unsigned i = 0; i < my_primitives->size(); i++) {
//		my_primitives->get(i)->calculate(time);
//	}
//}


bool SimRunnerThread::process_primitives(simtime_t time) {
#if VERBOSE == 1
	printf("processing primitives from %u to %u /n", processPrimitivesFrom, processPrimitivesToPlusOne);
#endif
	bool rerunDeltaFlag = false;
	for (unsigned i = processPrimitivesFrom; i < processPrimitivesToPlusOne; i++) {
		if (engine->get_primitive(i)->calculate(time) ){
			rerunDeltaFlag = true;
		}
	}
	return rerunDeltaFlag;
}


bool SimRunnerThread::fetch_need_to_rerun_ts_ansi() {
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

void SimRunnerThread::set_global_rerun_flag(bool localFalg) {
	if (localFalg) {
		globalRerunFlag[localLoopCntr] = true;
	}
}

void SimRunnerThread::set_global_run_flag(bool localFalg) {
	if (localFalg) {
		globalRunFlag[localLoopCntr] = true;
	}
}

/*
bool SimRunnerThread::need_to_rerun_ts_ansi() {
	synch_threads();
	if (threadID == 0) {
		rerunFlag = fetch_need_to_rerun_ts_ansi();
	}
	synch_threads();
	return rerunFlag;
}*/

bool SimRunnerThread::need_to_rerun_ts2() {
	/***********************
	* return_current_flag();
	**********************/
	bool retFlag = globalRerunFlag[localLoopCntr];

	/************************
	 * step_loop_counter();
	 ***********************/
	if (1 == localLoopCntr) {
		 localLoopCntr = 0;
	}
	else if (0 == localLoopCntr) {
		localLoopCntr = 1;
	}
	else {
		throw "localLoopCntr must be 0 or 1";
	}

	/***********************
	 * clear_next_flag();
	 **********************/
	globalRerunFlag[localLoopCntr] = false;

	return retFlag;
}


bool SimRunnerThread::need_to_run_ts() {
	/***********************
	* return_current_flag();
	**********************/
	bool retFlag = globalRunFlag[localLoopCntr];

	/************************
	***********************/
	if (1 == localLoopCntr) {
		globalRunFlag[0] = false;
	}
	else if (0 == localLoopCntr) {
		globalRunFlag[1] = false;
	}
	else {
		throw "localLoopCntr must be 0 or 1";
	}


	return retFlag;
}