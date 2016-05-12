#include "SimulatorEngine.h"
#include "stdio.h"


SimulatorEngine::SimulatorEngine(): __time__(0)
{
	//nets = new base::Vector<NetFlow*>();
	//primitives = new base::Vector<Primitive*>();
}


SimulatorEngine::~SimulatorEngine()
{
}

void SimulatorEngine::step_time()
{
	for (unsigned i = 0; i < nets.size(); i++) {
		NetFlow* net = nets.get(i);
		net->step_time((unsigned) __time__);
	}

	//int delta = -1;
	while (need_to_rerun_ts()) {
#if VERBOSE > 0
		printf("Running TS: %ld", __time__);
		fflush(stdout);
#endif
		step_delta();
		process_primitives(get_current_time());
#if VERBOSE > 0
		printf("   [  OK  ]\n");
		fflush(stdout);
#endif

	}


	__time__++;





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
}


NetFlow * SimulatorEngine::get_net(int netIndex)
{

	return this->nets.get_point(netIndex);
}

void SimulatorEngine::run(simtime_t time) {
	run_to(get_current_time() + time);
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


void SimulatorEngine::process_primitives(simtime_t time) {
	for (unsigned i = 0; i < primitives.size(); i++) {
		primitives.get(i)->calculate(time);
	}
}

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
	printf("%ld : %s: %s", get_current_time(), pref, message);
	fflush(stdout);
}