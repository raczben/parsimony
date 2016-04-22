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
		//printf("i: %d ", i);
		NetFlow* net = nets.get(i);
		//printf("nets[i]: %s \n", net->get_name());
		net->step_time(__time__);
	}

	int delta = -1;
	do {
		printf("Stepping delta...");
		fflush(stdout);
		step_delta();
		printf("   [  OK  ]\n");
		fflush(stdout);

		printf("Process primitives...");
		fflush(stdout);
		process_primitives(get_current_time());
		printf("   [  OK  ]\n");
		fflush(stdout);

	} while (need_to_rerun_ts());


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