#include "SimulatorEngine.h"
#include "stdio.h"
#include <iostream>


SimulatorEngine::SimulatorEngine(int numOfThreads): __time__(0)
{
	barrier = new Barrier(numOfThreads);

	for (int i = 0; i < numOfThreads; i++) {
		SimRunnerThread *thread = new SimRunnerThread(i, barrier);
		workers.push_back(thread);
		threads.push_back(nullptr);
	}

	//nets = new base::Vector<NetFlow*>();
	//primitives = new base::Vector<Primitive*>();
}


SimulatorEngine::~SimulatorEngine()
{
}

void SimulatorEngine::step_time()
{
	
	//throw new Exeption("Deprecated");
}

simtime_t SimulatorEngine::get_current_time()
{
	return __time__;
}

void SimulatorEngine::register_net(NetFlow * net)
{
	nets.push_back(net);
}


void SimulatorEngine::register_primitive(Primitive * primitive)
{
	primitives.push_back(primitive);
/*	workers.get(new_prim_to_this_TH)->register_primitive(primitive);
	
	new_prim_to_this_TH++;
	if (new_prim_to_this_TH >= workers.size()) {
		new_prim_to_this_TH = 0;
	}*/
}

void SimulatorEngine::prepare_for_running() {
	int primitivesPerThread;
	int from, toPlusOne = 0;
	for (int i = 0; i < workers.size(); i++) {
		primitivesPerThread = (primitives.size()-toPlusOne) / (workers.size()-i);
		from = toPlusOne;
		toPlusOne = primitivesPerThread + from;
		workers.get(i)->set_processing_range(from, toPlusOne);
	}
}


//NetFlow * SimulatorEngine::get_net(int netIndex)
//{
//
//	return this->nets.get(netIndex);
//}

Primitive * SimulatorEngine::get_primitive(int netIndex)
{
	return primitives.get(netIndex);
}


void SimulatorEngine::run(simtime_t time) {

	try {
		printf("Create Threads:  ");
		for (int i = 0; i < workers.size(); i++) {
			printf(" %d ", i);
			SimRunnerThread* worker = workers.get(i);
			worker->runUntil = engine->get_current_time() + time;
			threads[i] = (new std::thread([worker] { worker->__run__(); }));
			//threads.get(i)->run(time);

		}
	}
	catch (const std::exception &exc)
	{
		// catch anything thrown within try block that derives from std::exception
		std::cerr << "SimulatorEngine::run: start sim: " << exc.what() << std::endl;
		exit(-1);
	}

	printf("\n");
	try {
	printf("Wait for TH:  ");
	for (int i = 0; i < threads.size(); i++) {
		printf(" %d ", i);
		
		threads.get(i)->join();
		printf(" [  OK  ] ");

		delete (threads.get(i));

	}
	}
	catch (const std::exception &exc)
	{
		// catch anything thrown within try block that derives from std::exception
		std::cerr << "SimulatorEngine::run: join sim: " << exc.what() << std::endl;
		exit(-1);
	}

	printf("\n");
	printf("\n");
	//run_to(get_current_time() + time);
}


void SimulatorEngine::run_to(simtime_t time) {
	while (time > get_current_time()) {
		step_time();
	}
}

void SimulatorEngine::step_delta() {
	for (unsigned i = 0; i < nets.size(); i++) {
		nets.get(i)->step_delta();
	}
}


void SimulatorEngine::process_primitives_thread(base::Vector<Primitive*>* my_primitives , simtime_t time) {
	for (unsigned i = 0; i < my_primitives->size(); i++) {
		my_primitives->get(i)->calculate(time);
	}
}


/*void SimulatorEngine::process_primitives(simtime_t time) {
	for (unsigned i = 0; i < primitives.size(); i++) {
		primitives.get(i)->calculate(time);
	}
}*/

bool SimulatorEngine::need_to_rerun_ts() {
	for (unsigned i = 0; i < nets.size(); i++) {
		if (nets.get(i)->get_use_in_event()) {
			if (nets.get(i)->get_change_flag()) {
#if VERBOSE > 0
				printf("The %d  %s changed.\n", i, nets.get(i)->get_name());
#endif
				return true;
			}
		}
	}
	return false;
}

void SimulatorEngine::writeError(char* message) {
	_writeMessage_("ERROR", message);
}


void SimulatorEngine::writeInfo(char* message) {
	_writeMessage_("INFO", message);
}



void SimulatorEngine::writeWarning(char* message) {
	_writeMessage_("WARNING", message);
}



void SimulatorEngine::_writeMessage_(char* const pref, char* message) {
	printf("%lld : %s: %s", get_current_time(), pref, message);
	fflush(stdout);
}