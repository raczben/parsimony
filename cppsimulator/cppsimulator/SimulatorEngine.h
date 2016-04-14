/******************************************************************************
 *
 *****************************************************************************/

#ifndef SIMULATOR_ENGINE_H
#define SIMULATOR_ENGINE_H

#include "sim_types.h"
#include "base_vector.h"
#include "Primitive.h"
#include "NetFlow.h"

class SimulatorEngine
{

	simtime_t __time__;
	base::Vector<NetFlow*> nets;
	base::Vector<Primitive*> primitives;


public:
	SimulatorEngine();
	~SimulatorEngine();

	void step_time();
	
	simtime_t get_current_time();

	void register_net(NetFlow * net);

	void register_primitive(Primitive * primitive);


	NetFlow * SimulatorEngine::get_net(int netIndex);

};

#endif //SIMULATOR_ENGINE_H