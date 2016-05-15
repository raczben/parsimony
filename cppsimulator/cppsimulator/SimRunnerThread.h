/******************************************************************************
* SimRunnerThread.h
*
* created by: Benedek Racz
*       date: 2016. 05. 11.
*****************************************************************************/

#ifndef SIMRUNNERTHREAD_H
#define SIMRUNNERTHREAD_H

#include "sim_types.h"
#include "base_vector.h"
#include "Primitive.h"
#include "NetFlow.h"
#include "shared.h"
#include <thread>         // std::thread
//#include "RunnerWorker.h"
#include "Barrier.h"

class SimRunnerThread
{
	//static simtime_t time;
	//static SimulatorEngine engine
	int threadID;
	Barrier *barrier;
	unsigned int processPrimitivesFrom;	//inclusive
	unsigned int processPrimitivesToPlusOne;	//exclusive
	static bool rerunFlag;
public:
	simtime_t runUntil;
	//std::thread *my_worker_thread;

public:
	SimRunnerThread(int iD, Barrier* barrier);
	~SimRunnerThread();

	void stepAllNets();

	void synch_threads();

	void set_processing_range(int from, int toPlusOne) {
		processPrimitivesFrom = from;
		processPrimitivesToPlusOne = toPlusOne;
	}


	/**************************************************************************
	* run() runs the simulation for a given time. If we are at the 30th TS
	* run(10) runs until the 40th TS.
	* The following commands are equal:
	*  run(simtime_t time)
	*  run_to(get_current_time() + time)
	*************************************************************************/
	void run(simtime_t time);

	void __run__();

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
	//void process_primitives(simtime_t time);

	/**************************************************************************
	*
	*************************************************************************/
	void process_primitives_thread(base::Vector<Primitive*>* my_primitives, simtime_t time);

	void process_primitives(simtime_t time);

	bool fetch_need_to_rerun_ts();

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

	

};


#endif //SIMRUNNERTHREAD_H