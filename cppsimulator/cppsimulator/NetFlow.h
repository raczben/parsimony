/******************************************************************************
* NetFlow.h
*
* created by: Benedek Racz
*       date: 2016. 05. 11.
*****************************************************************************/
#ifndef NET_FLOW_H
#define NET_FLOW_H

#include <stdbool.h>
#include "base_vector.h"
#include "sim_types.h"
#include "SimulatorEngine.h"
#include "shared.h"
#include "Primitive.h"
#include "NetLevel.h"
#include <mutex>

/******************************************************************************
 * net_flow_struct contains all data related to a net. Ex.: tt contains its
 * name, and data in the past/future. It is not recommended to use it directly.
 * Use functions below instead.
 *****************************************************************************/
class NetFlow {
	// The name of the NET
	char *name;

	// The data in the past/future
	base::Vector<net_change_t*> data;

	// points on the actual time-slot in the data vector.
	// If there is a entry with the current timeslot it points on this, 
	// else it points on the earlyer closest element. 
	// The step_time() sets this.
	int now_index;

	//net_level_t *data;
	// If use_in_event is true this net is used in an event (somewhere in the
	// simulation) So If it changes some primitive/cell/process must be rerun.
	bool use_in_event;

	//The number of the buffers/drivers which are driving this net at the moment.
	int current_driver_count;

	//
	bool monitor_change;

	//not used: Each net has one driver in first implementation.
	base::Vector<driver_t> *drivers;

	// not used
	base::Vector<reader_t> *readers;

	//event_readers contains all primitives, which wait trigger on this net at least once.
	// Events example: combinational networks, always * ...
	base::Vector<Primitive*> event_readers;

	bool changed_in_this_delta = true;

	std::mutex m;

	//
public:
	NetFlow(const NetFlow& other);
	NetFlow();
	~NetFlow();

	/******************************************************************************
	* returns the name of net_flow's net
	*****************************************************************************/
	//net_flow_t* new_net_flow(const char* name, net_level_t initial_level, bool monitor_change = false);
	NetFlow(const char * name, net_level_t initial_level = new_net_level(UNDEFINED), bool monitor_change = false);

	/******************************************************************************
	* initialize the net_flow. Use new_net_flow instead.
	*****************************************************************************/
	void init(const char* name, net_level_t initial_level, bool monitor_change = false);

	/******************************************************************************
	* returns the name of net_flow's net
	*****************************************************************************/
	const char *get_name() const;

	/******************************************************************************
	* sets the name of net_flow's net
	*****************************************************************************/
	void set_name(const char *);


	/******************************************************************************
	* returns the use_in_event flag:
	* If use_in_event is true this net is used in an event (somewhere in the
	* simulation) So If it changes some primitive/cell/process must be rerun.
	*****************************************************************************/
	bool get_use_in_event() const;


	/******************************************************************************
	*
	*****************************************************************************/
	void step_delta();

	/******************************************************************************
	*
	*****************************************************************************/
	void clear_change_flag();

	/******************************************************************************
	*
	*****************************************************************************/
	bool get_change_flag() { return changed_in_this_delta; }


	/******************************************************************************
	*
	*****************************************************************************/
	void register_reader(const reader_t & reader_primitive);

	/******************************************************************************
	*
	*****************************************************************************/
	void register_driver(const driver_t & driver_primitive);

	/******************************************************************************
	*
	*****************************************************************************/
	void register_event_reader(Primitive*  const reader_primitive);

	/******************************************************************************
	*
	*****************************************************************************/
	void step_time(const unsigned time_to_step);

	/******************************************************************************
	*
	*****************************************************************************/
	void print_flow(int numOfChange = -1) const;

	/******************************************************************************
	*
	*****************************************************************************/
	// TODO const
	base::Vector<net_change_t*> get_data() { return data; }

	/******************************************************************************
	*
	*****************************************************************************/
	void NetFlow::generate_clock(simtime_t period, simtime_t until, value_t start_value = LOW);


	/******************************************************************************
	*
	*****************************************************************************/
	void NetFlow::generate_clock(simtime_t half_period, simtime_t from, simtime_t until, value_t start_value = LOW);

	/**************************************************************************
	 *
     * XXXXX   XXX    X   X   XXX    X    
     *  X     X   X   X   X  X   X   X     
     *  X     X   X   X   X  X   X   X     
     *  XXX   X   X   X   X  XXXXX   X     
     *  X     X X X   X   X  X   X   X    
     *  X     X  XX   X   X  X   X   X    
     * XXXXX   XXXXX   XXX   X   X  XXXXX 
	 *
	 *************************************************************************/

	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	bool is_equal_at(value_t val, simtime_t time) const ;


	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_at(net_flow, val, get_current_time());
	*****************************************************************************/
	bool is_equal_from_now(value_t val, simtime_t time) const;

	/******************************************************************************
	* checks if the net has the given value at the current time.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_now(net_flow, val);
	*****************************************************************************/
	bool is_equal_now(value_t val) const;


	/******************************************************************************
	* checks if the net has the given value at the previous time slot.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, -1);
	* is_equal_prev(net_flow, val);
	*****************************************************************************/
	bool is_equal_prev(const value_t val, simtime_t time = -1) const;


	bool is_equal_at(net_level_t level, simtime_t time) const;


	bool posedge_at(simtime_t time);

	/******************************************************************************
	 *
	 *  XXX   XXXXX  XXXXX   XXXXX   XXXXX   XXXX     XXX    
     * X       X       X       X      X      X   X   X       
     * X       X       X       X      X      X   X   X       
     * X  XXX  XXX     X       X      XXX    XXXX     XXX    
     * X   X   X       X       X      X      XX          X   
     * X   X   X       X       X      X      X X         X   
     *  XXX   XXXXX    X       X     XXXXX   X  X     XXX    
	 *
	 ******************************************************************************/

	/******************************************************************************
	* returns the net value at a given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	net_level_t get_at(const simtime_t time) const ;

	/******************************************************************************
	* returns the net value at a given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	value_t get_value_at(const simtime_t time) const { return get_at(time).value; }
	

	/******************************************************************************
	*
	*****************************************************************************/
	value_t get_value_prev(simtime_t time) const;

	/******************************************************************************
	* returns the net value at a given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* get_from_now(net_flow, 0);
	* get_at(net_flow, get_current_time());
	*****************************************************************************/
	net_level_t get_from_now(const simtime_t time) const;



	/******************************************************************************
	 *
     *  XXX   XXXXX  XXXXX   XXXXX   XXXXX   XXXX     XXX    
     * X       X       X       X      X      X   X   X      
     * X       X       X       X      X      X   X   X       
     *  XXX    XXX     X       X      XXX    XXXX     XXX   
     *     X   X       X       X      X      XX          X  
     *     X   X       X       X      X      X X         X  
     *  XXX   XXXXX    X       X     XXXXX   X  X     XXX   
	 *
	 ******************************************************************************/
	

	/******************************************************************************
	* Sets the net_flow value at the given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	void set_at(const net_level_t level, const simtime_t set_time);


	/******************************************************************************
	 *
	 *****************************************************************************/
	void set_from_now(const net_level_t level, const simtime_t set_time);


	/******************************************************************************
	 *
	 *****************************************************************************/
	void set_now(const net_level_t level);


	/******************************************************************************
	 *
	 *****************************************************************************/
	void set_now(const value_t val, const strength_t strength = strong);


	/******************************************************************************
	 *
	 *****************************************************************************/
	void set_from_now(const value_t val, const simtime_t time, const strength_t strength = strong);


	/******************************************************************************
	 *
	 *****************************************************************************/
	void set_at(const value_t val, const simtime_t time, const strength_t strength = strong);





	protected:
	int __find_nearest_earlier_index__(const simtime_t serach_time) const;


};


#endif //NET_FLOW_H
