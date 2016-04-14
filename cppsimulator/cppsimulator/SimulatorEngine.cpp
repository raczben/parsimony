#include "SimulatorEngine.h"


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


void SimulatorEngine::register_primitive(Primitive * primitive)
{
	primitives.push_back(primitive);
}


NetFlow * SimulatorEngine::get_net(int netIndex)
{

	return this->nets.get_point(netIndex);
}

