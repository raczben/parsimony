/******************************************************************************
 *
 *****************************************************************************/
#ifndef NET_FLOW_H
#define NET_FLOW_H

#include <stdbool.h>
#include "base_vector.h"
#include "sim_types.h"
#include "SimulatorEngine.h"
#include "shared.h"

typedef enum {
	LOW = 0,
	HIGH = 1,
	UNDEFINED = 2,
	HIGH_Z = 3
} value_t;

static const char *to_string(value_t f)
{
	static const char *strings[] = { "LOW", "HIGH", "UNDEFINED", "HIGH_Z" };
	return strings[f];
}

typedef enum {
	highz = 0,
	small = 1,
	medium = 2,
	weak = 3,
	large = 4,
	pull = 5,
	strong = 6,
	supply = 7
} strength_t;

static const char *to_string(strength_t f)
{
	static const char *strings[] = { "highz" "small" "medium" "weak" "large" "pull" "strong" "supply" };
	return strings[f];
}



/*
supply0, supply1,
strong0, strong1, pull0, pull1, weak0, weak1,
highz0, highz1, small, medium, large
*/

struct net_level_struct {
	value_t value : 2;
	strength_t strength : 3;
};
typedef struct net_level_struct net_level_t;

net_level_t new_net_level(value_t val, strength_t strength);

net_level_t new_net_level(value_t val);

static char *to_string(net_level_t f)
{
	char ret[4];
	ret[3] = '\0';
	const char* tmp = to_string(f.strength);
	ret[0] = tmp[0];
	ret[1] = tmp[1];
	if (HIGH == f.value) {
		ret[2] = '1';
		return ret;
	}
	if (LOW == f.value) {
		ret[2] = '0';
		return ret;
	}
	if (UNDEFINED == f.value) {
		ret[2] = 'x';
		return ret;
	}
	if (HIGH_Z == f.value) {
		ret[2] = 'z';
		return ret;
	}
}

struct net_change_struct {
	net_level_t level;
	simtime_t time;
};
typedef struct net_change_struct net_change_t;


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

	//
	base::Vector<driver_t> *drivers;

	//
	base::Vector<reader_t> *readers;

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
	const char *get_name();

	/******************************************************************************
	* sets the name of net_flow's net
	*****************************************************************************/
	void set_name(const char *);

	/******************************************************************************
	* Sets the use_in_event flag:
	* If use_in_event is true this net is used in an event (somewhere in the
	* simulation) So If it changes some primitive/cell/process must be rerun.
	*****************************************************************************/
	void set_use_in_event(bool use_in_event);

	/******************************************************************************
	* returns the use_in_event flag:
	* If use_in_event is true this net is used in an event (somewhere in the
	* simulation) So If it changes some primitive/cell/process must be rerun.
	*****************************************************************************/
	bool get_use_in_event();

	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	bool is_equal_at(value_t val, simtime_t time);

	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	//bool is_equal_at(net_value_t val, simtime_t time);

	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_at(net_flow, val, get_current_time());
	*****************************************************************************/
	//bool is_equal_from_now(net_value_t val, simtime_t time);

	/******************************************************************************
	* check if net_flow's value is equal at the given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_at(net_flow, val, get_current_time());
	*****************************************************************************/
	bool is_equal_from_now(value_t val, simtime_t time);

	/******************************************************************************
	* checks if the net has the given value at the current time.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_now(net_flow, val);
	*****************************************************************************/
	//bool is_equal_now(net_value_t val);

	/******************************************************************************
	* checks if the net has the given value at the current time.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, 0);
	* is_equal_now(net_flow, val);
	*****************************************************************************/
	bool is_equal_now(value_t val);

	/******************************************************************************
	* checks if the net has the given value at the previous time slot.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, -1);
	* is_equal_prev(net_flow, val);
	*****************************************************************************/
	//bool is_equal_prev(net_value_t val);

	/******************************************************************************
	* checks if the net has the given value at the previous time slot.
	* The followings are the same:
	* is_equal_from_now(net_flow, val, -1);
	* is_equal_prev(net_flow, val);
	*****************************************************************************/
	bool is_equal_prev(const value_t val);

	/******************************************************************************
	* returns the net value at a given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	net_level_t get_at(const simtime_t time);

	/******************************************************************************
	* returns the net value at a given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* get_from_now(net_flow, 0);
	* get_at(net_flow, get_current_time());
	*****************************************************************************/
	net_level_t get_from_now(const simtime_t time);

	/******************************************************************************
	* Sets the net_flow value at the given time. The 0 time is the start
	* of the simulation.
	*****************************************************************************/
	void set_at(const net_level_t level, const simtime_t set_time);


	/******************************************************************************

	*****************************************************************************/
	void set_from_now(const net_level_t level, const simtime_t set_time);

	/******************************************************************************

	*****************************************************************************/
	void set_now(const net_level_t level);

	/******************************************************************************
	* Sets the net_flow value at the given time. The 0 time is the
	* current time of the simulation.
	* The followings are the same:
	* set_value_from_now(net_flow, val, 0);
	* set_value_at(net_flow, val, get_current_time());
	*****************************************************************************/
	//void set_value_from_now(net_value_t val, simtime_t time);



	void register_reader(const reader_t & reader_primitive);

	void register_driver(const driver_t & driver_primitive);

	void step_time(const unsigned time_to_step);

	protected:
	int __find_nearest_earlier_index__(const simtime_t serach_time);


};


#endif //NET_FLOW_H
