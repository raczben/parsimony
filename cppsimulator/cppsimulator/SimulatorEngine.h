/******************************************************************************
* SimulatorEngine.h
*
* created by: Benedek Racz
*       date: 2016. 05. 11.
*****************************************************************************/

#ifndef SIMULATOR_ENGINE_H
#define SIMULATOR_ENGINE_H

#include "sim_types.h"
#include "base_vector.h"
#include "Primitive.h"
#include "NetFlow.h"

/******************************************************************************
 * The SimulatorEngine is the controller of the simulation. This class contains
 * the time, and increment the it by run() and step_time() method.
 *
 *****************************************************************************/
class SimulatorEngine
{

	simtime_t __time__;
	base::Vector<NetFlow*> nets;
	base::Vector<Primitive*> primitives;

public:
	SimulatorEngine();
	~SimulatorEngine();


	/**************************************************************************
	* get_current_time() returns the current time of the simulation in time-slot.
	*************************************************************************/
	simtime_t get_current_time();

	/**************************************************************************
 	 * register_net() add a net to the simulation. All nets must be registered
	 * in the engine at the beginning of the simulation.
	 *************************************************************************/
	void register_net(NetFlow * net);

	/**************************************************************************
	 * register_primitive() adds the given primitive to the engine. All
	 * primitive must be registrated in the engine at the beginning of the
	 * simulation.
	 *************************************************************************/
	void register_primitive(Primitive * primitive);


	/**************************************************************************
	 * get_net_count() returns the number of the registrated nets.
	 *************************************************************************/
	unsigned  SimulatorEngine::get_net_count() { return nets.size(); }

	/**************************************************************************
	 * get_net(i) returns the pointer of the i-th netFlow.
	 *************************************************************************/
	NetFlow * SimulatorEngine::get_net(int netIndex);

	/**************************************************
	 *
     * XXXX   X   X   X   X 
     * X   X  X   X   XX  X 
     * X   X  X   X   X X X 
     * XXXX   X   X   X X X 
     * XX     X   X   X X X 
     * X X    X   X   X  XX 
     * X  X    XXX    X   X 
	 *
	 * Functions below helps/control  the running of the simulation.
	 **************************************************/

	/**************************************************************************
	 * run() runs the simulation for a given time. If we are at the 30th TS
	 * run(10) runs until the 40th TS.
	 * The following commands are equal:
	 *  run(simtime_t time)
	 *  run_to(get_current_time() + time)
	 *************************************************************************/
	void run(simtime_t time);

	/**************************************************************************
	 * run_to() runs until a specific time.
	 * If you call run_to(50) the current TS will be 50 after the calling.
	 * This function uses step_time()
	 *************************************************************************/
	void run_to(simtime_t time);

	/**************************************************************************
	 * step_time() steps the TS by one. It steps all Nets, and it calls all
	 * primitives to calculate their output if it needed.
	 *************************************************************************/
	void step_time();

	/**************************************************************************
	 * process_primitives() call calculate function of each registrated
	 * primitives
	 *************************************************************************/
	void process_primitives(simtime_t time);

	/**************************************************************************
	 * need_to_rerun_ts() go therew the nets and return true if the value has
	 * been changed of any critical net. Critical is all net which output is
	 * read as event.
	 *************************************************************************/
	bool need_to_rerun_ts();

	/**************************************************************************
	 * step_delta() call all nets step delta function to clear the change flags.
	 *************************************************************************/
	void step_delta();

	    
	/**************************************************
	 *
     * XXXXX   XXXXX  XXXX    X   X    XXX  
     *  X   X   X     X   X   X   X   X     
     *  X   X   X     X   X   X   X   X     
     *  X   X   XXX   XXXX    X   X   X  XXX
     *  X   X   X     X   X   X   X   X   X 
     *  X   X   X     X   X   X   X   X   X 
     * XXXXX   XXXXX  XXXX     XXX     XXX  
	 *
	 **************************************************/

	/**************************************************************************
	 * Writes an error message.
	 *************************************************************************/
	void writeError(char* const message);

	/**************************************************************************
	 * Writes an info message.
	 *************************************************************************/
	void writeInfo(char* const message);

	/**************************************************************************
	 * Writes a warning message.
	 *************************************************************************/
	void writeWarning(char* const message);

	/**************************************************************************
	 * Message writer helper.
	 *************************************************************************/
	void _writeMessage_(char*  const pref, char* const message);

};

#endif //SIMULATOR_ENGINE_H