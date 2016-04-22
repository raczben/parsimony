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


	unsigned  SimulatorEngine::get_net_count() { return nets.size(); }

	NetFlow * SimulatorEngine::get_net(int netIndex);

	void run(simtime_t time);

	void run_to(simtime_t time);

	void process_primitives(simtime_t time);
	
	bool need_to_rerun_ts();

	void step_delta();


	void writeError(char* const message);

	void writeInfo(char* const message);

	void writeWarning(char* const message);

	void _writeMessage_(char*  const pref, char* const message);

};

#endif //SIMULATOR_ENGINE_H