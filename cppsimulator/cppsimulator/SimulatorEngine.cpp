#include "SimulatorEngine.h"



SimulatorEngine::SimulatorEngine(): __time__(0)
{
}


SimulatorEngine::~SimulatorEngine()
{
}

void SimulatorEngine::step_time()
{
	__time__++;
	for (unsigned i = 0; i < nets.size(); i++) {
		nets[i]->step_time(__time__);
	}
}

simtime_t SimulatorEngine::get_current_time()
{
	return __time__;
}

void SimulatorEngine::register_net(NetFlow * net)
{
	nets.push_back(net);
}
