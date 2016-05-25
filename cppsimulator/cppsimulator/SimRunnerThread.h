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

typedef uint8_t loop_cntr_t;

//#define 


class SimRunnerThread
{
	//static simtime_t time;
	//static SimulatorEngine engine
	int threadID;
	Barrier *barrier;
	unsigned int processPrimitivesFrom;	//inclusive
	unsigned int processPrimitivesToPlusOne;	//exclusive
	unsigned int stepNetsFrom;	//inclusive
	unsigned int stepNetsToPlusOne;	//exclusive
	
	/********************************
	 * Syncronization objects:
	 *******************************/
	loop_cntr_t localLoopCntr = 0;
	loop_cntr_t localLoopCntr2 = 0;
	static bool globalRerunFlag[3];
	static bool globalRunFlag[3];

	// DEPRECATED
	static bool rerunFlag;

	static const loop_cntr_t loop_cntr_step_table[3];
	static const loop_cntr_t loop_cntr_step_back_table[3];

	simtime_t local_time;

public:
	simtime_t runUntil;
	//std::thread *my_worker_thread;

private:

	void step_loop_counter() {
		localLoopCntr = step_loop_counter(localLoopCntr);
	}

	void step_loop_counter2() {
		localLoopCntr2 = step_loop_counter(localLoopCntr2);
	}

	loop_cntr_t step_loop_counter(loop_cntr_t _localLoopCntr) {
		return loop_cntr_step_table[_localLoopCntr];
		/*_localLoopCntr++;
		if (3 == _localLoopCntr) {
			_localLoopCntr = 0;
		}*/
	}

	loop_cntr_t get_set_get_ptr() {
		return localLoopCntr;
	}


	loop_cntr_t get_clear_ptr() {
		return loop_cntr_step_back_table[localLoopCntr];
	}

	loop_cntr_t get_set_get_ptr2() {
		return localLoopCntr2;
	}


	loop_cntr_t get_clear_ptr2() {
		return loop_cntr_step_back_table[localLoopCntr2];
	}


public:
	SimRunnerThread(int iD, Barrier* barrier);
	~SimRunnerThread();

	bool stepAllNets();

	void synch_threads();

	void set_processing_range(int primFrom, int primToPlusOne, int netFrom, int netToPlusOne) {
		printf("primFrom: %d  primToPlusOne: %d  netFrom: %d  netToPlusOne: %d\n", primFrom, primToPlusOne, netFrom, netToPlusOne);
		processPrimitivesFrom = primFrom;
		processPrimitivesToPlusOne = primToPlusOne;
		
		stepNetsFrom = netFrom;
		stepNetsToPlusOne = netToPlusOne;
	}

	/*void set_net_processing_range(int primFrom, int primToPlusOne) {
		processPrimitivesFrom = primFrom;
		processPrimitivesToPlusOne = primToPlusOne;
	}*/


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

	bool process_primitives(simtime_t time);

	bool fetch_need_to_rerun_ts_ansi();

	void set_global_rerun_flag(bool localFalg);

	void set_global_run_flag(bool localFalg);

	/**************************************************************************
	* need_to_rerun_ts() go therew the nets and return true if the value has
	* been changed of any critical net. Critical is all net which output is
	* read as event.
	*************************************************************************/
	bool need_to_rerun_ts_ansi();


	/**************************************************************************
	* need_to_rerun_ts2()
	*************************************************************************/
	bool need_to_rerun_ts2();

	bool need_to_run_ts();

	/**************************************************************************
	* step_delta() call all nets step delta function to clear the change flags.
	*************************************************************************/
	void step_delta();

	

};


#endif //SIMRUNNERTHREAD_H