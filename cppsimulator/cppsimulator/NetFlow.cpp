#include "NetFlow.h"

#include "NetFlow.h"
#include "simulator_base.h"
#include "base_vector.h"
#include "sim_types.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <Primitive.h>

/******************************************************************************
* returns the name of net_flow's net
*****************************************************************************/
NetFlow::NetFlow(const char* name, net_level_t initial_level, bool monitor_change):name(0)  {
	init(name, initial_level, monitor_change);
}

/******************************************************************************
* initialize the net_flow. Use new_net_flow instead.
*****************************************************************************/
void NetFlow::init(const char* name, net_level_t initial_level, bool monitor_change) {
	this->monitor_change = monitor_change;
	//this->name = NULL;
	set_name(name);
	/*this->data = base::Vector<net_change_t>();*/
	this->readers = new base::Vector<reader_t>();
	this->drivers = new base::Vector<driver_t>();
	//this->event_readers = new base::Vector<Primitive*>();
	

	set_at(initial_level, 0);

}

/******************************************************************************
* returns the name of net_flow's net
*****************************************************************************/
const char* NetFlow::get_name() const {
	return this->name;
}

/******************************************************************************
* sets the name of net_flow's net
*****************************************************************************/
void NetFlow::set_name(const char *new_name) {
	if (this->name) {
		free(this->name);
	}
	this->name = _strdup(new_name);
}

/******************************************************************************
* Sets the use_in_event flag:
* If use_in_event is true this net is used in an event (somewhere in the
* simulation) So If it changes some primitive/cell/process must be rerun.
*****************************************************************************/
//void NetFlow::set_use_in_event(const bool use_in_event) {
//	this->use_in_event = use_in_event;
//}

/******************************************************************************
* returns the use_in_event flag:
* If use_in_event is true this net is used in an event (somewhere in the
* simulation) So If it changes some primitive/cell/process must be rerun.
*****************************************************************************/
bool NetFlow::get_use_in_event() const {
	return !this->event_readers.empty();
	//return this->use_in_event;
}

/******************************************************************************
* check if net_flow's value is equal at the given time. The 0 time is the start
* of the simulation.
*****************************************************************************/
bool NetFlow::is_equal_at(value_t val, simtime_t time) const {
	net_level_t net_level;
	value_t net_value = UNDEFINED;
	if (time >= 0) {
		net_level = get_at(time);
		net_value = net_level.value;
	}
	return net_value == val;
}

/******************************************************************************
* check if net_flow's value is equal at the given time. The 0 time is the
* current time of the simulation.
* The followings are the same:
* is_equal_from_now(net_flow, val, 0);
* is_equal_at(net_flow, val, get_current_time());
*****************************************************************************/
bool NetFlow::is_equal_from_now(value_t val, simtime_t time) const {
	return is_equal_at(val, time + engine->get_current_time());
}

/******************************************************************************
* returns the net value at a given time. The 0 time is the start
* of the simulation.
*****************************************************************************/
net_level_t NetFlow::get_at(simtime_t serach_time) const {

	net_change_t tmp_net_value_change;
	int index = __find_nearest_earlier_index__(serach_time);

	tmp_net_value_change = *(data[index]);
	return tmp_net_value_change.level;

}

/******************************************************************************
* returns the net value at a given time. The 0 time is the
* current time of the simulation.
* The followings are the same:
* get_from_now(net_flow, 0);
* get_at(net_flow, get_current_time());
*****************************************************************************/
net_level_t NetFlow::get_from_now(const simtime_t time) const  {
	return get_at(time + engine->get_current_time());
}

/******************************************************************************
* checks if the net has the given value at the current time.
* The followings are the same:
* is_equal_from_now(net_flow, val, 0);
* is_equal_now(net_flow, val);
*****************************************************************************/
bool NetFlow::is_equal_now(const value_t val) const {
	return is_equal_from_now(val, 0);
}

/******************************************************************************
* 
*****************************************************************************/
bool NetFlow::is_equal_prev(const value_t val, simtime_t time) const  {
	if (time < 0) {
		return is_equal_from_now(val, -1);
	}
	return is_equal_at(val, time - 1);
}

value_t NetFlow::get_value_prev(simtime_t time) const {
	if (time < 0) {
		return UNDEFINED;
	}
	return get_at(time - 1).value;

}

bool NetFlow::posedge_at(simtime_t time) {
	if (is_equal_at(HIGH, time) && is_equal_prev(LOW, time)) {
		return true;
	}
	return false;
}

/******************************************************************************
* Sets the net_flow value at the given time. The 0 time is the start
* of the simulation.
*****************************************************************************/
void NetFlow::set_at(const net_level_t level, const simtime_t set_time) {
	net_change_t* new_element = new net_change_t();
	new_element->level = level;
	new_element->time = set_time;

	/**
	* Negative settime is illegal
	*/
	if (set_time < 0) {
		throw "set time is negative";
	}

	/**
	* If the data vector is empty then push the new element
	*/
	if (data.empty()) {
		this->data.push_back(new_element);
		now_index = 0;
		changed_in_this_delta = true;
		return;
	}

	/**
	* If the new value is equal the previous, there is no change in value => we dont do anythink.
	*/
	if (is_equal_at(level, set_time)) {
		return;	
	}
	else {
		// If the value has to be changed, and we are at now, there must be some rerun...
		if (set_time == engine->get_current_time()) {
			changed_in_this_delta = true;
		}
	}


	/**
	* If we want to set a future time point just push back
	Note that now_pointer should not be refreshed.
	*/
	/*if (data.get_last()->time < set_time) {
		this->data.push_back(new_element);
		return;
	}*/

	/**
	* Erease mod: remove all later event on the net than set_time:
	*/
	//unsigned size = data.size();
	while (data.get_last()->time >= set_time) {
		this->data.remove_last();

		if (data.empty()) {
			this->data.push_back(new_element);
			now_index = 0;
			return;
		}
		//size = data.size();
	}

	this->data.push_back(new_element);
	if (set_time<=engine->get_current_time()) {
		now_index = data.size() - 1;
	}

	return;
}

void NetFlow::step_delta() {
	clear_change_flag();
}

void NetFlow::clear_change_flag() {
	changed_in_this_delta = false;
}

/******************************************************************************
* Sets the net_flow value at the given time. The 0 time is the
* current time of the simulation.
* The followings are the same:
* set_value_from_now(net_flow, val, 0);
* set_value_at(net_flow, val, get_current_time());
*****************************************************************************/
void NetFlow::set_from_now(const net_level_t level, const simtime_t set_time) {
	set_at(level, set_time + engine->get_current_time());
}

void NetFlow::set_from_now(const value_t val, const simtime_t set_time, const strength_t strength) {
	set_at(val, set_time + engine->get_current_time(), strength);
}

void NetFlow::set_at(const value_t val, const simtime_t time, const strength_t strength) {
	set_at(new_net_level(val, strength), time);
}

/******************************************************************************

*****************************************************************************/
void NetFlow::set_now(const net_level_t level) {
	set_from_now(level, 0);
}

/******************************************************************************

*****************************************************************************/
void NetFlow::set_now(const value_t val, const strength_t strength) {
	set_from_now(val, 0, strength);
}

int NetFlow::__find_nearest_earlier_index__(const simtime_t serach_time) const  {
	net_change_t tmp_net_value_change ;
	simtime_t tmp_time;
	int first_index;
	int last_index;
	int middle_index;

	if (engine->get_current_time() == serach_time) {
		return now_index;
	}
	if (serach_time > engine->get_current_time()) {
		first_index = now_index;
		last_index = this->data.size() - 1;
		middle_index = (first_index + last_index) / 2;
	}
	else {
		first_index = 0;
		last_index = now_index;
		middle_index = (first_index + last_index) / 2;
	}


	if (last_index < 0) {
		return -1;
	}

	// Usually the last value is good:
	/*tmp_net_value_change = this->data[last_index];
	tmp_time = tmp_net_value_change.time;
	if (tmp_time < serach_time) {
		return last_index;
	}
	last_index--;*/

	while (first_index <= last_index) {
		tmp_net_value_change = *(data[middle_index]);
		tmp_time = tmp_net_value_change.time;
		if (tmp_time < serach_time) {
			first_index = middle_index + 1;
		}
		else if (tmp_time == serach_time) {
			return middle_index;
		}
		else {
			last_index = middle_index - 1;
		}
		middle_index = (first_index + last_index) / 2;
	}
	return last_index;

}


void NetFlow::register_reader(const reader_t & reader_primitive) { 
	this->drivers->push_back(reader_primitive);
}


void NetFlow::register_driver(const driver_t & driver_primitive) {
	this->drivers->push_back(driver_primitive);
}

void NetFlow::step_time(const unsigned time_to_step)
{
	if (data.size() == 1) {
		now_index = 0;
		if (time_to_step == now_index) {
			changed_in_this_delta = true;
		}
		return;
	}
	while (true) {
		if (now_index + 1 >= (signed)data.size())
			return;
		if (data[now_index + 1]->time > time_to_step)
			return;
		now_index++;
		if (time_to_step == data.get(now_index)->time ) {
			changed_in_this_delta = true;
		}
	}
}






NetFlow::NetFlow(const NetFlow & other)
{
	set_name(other.name);
	data = base::Vector<net_change_t*>(other.data);

	now_index = other.now_index;

	use_in_event = other.use_in_event;

	current_driver_count = other.current_driver_count;
	
	monitor_change = other.monitor_change;

	drivers = new base::Vector<driver_t>(*drivers);

	readers = new base::Vector<reader_t>(*readers);
}

/*
NetFlow::NetFlow():name(0)
{
	//init("new_name", );
	set_name("new_net");
	data = base::Vector<net_change_t*>();

	now_index = -1;

	use_in_event = false;

	//current_driver_count = other.current_driver_count;

	monitor_change = false;

	drivers = new base::Vector<driver_t>();

	readers = new base::Vector<reader_t>();

}*/
//
//
NetFlow::~NetFlow()
{
	free(name);


	delete drivers;

	delete readers;
}


void NetFlow::register_event_reader(Primitive*  const reader_primitive) {
	event_readers.push_back(reader_primitive);
}



net_level_t new_net_level(value_t val, strength_t strength) {
	net_level_t new_instance;
	new_instance.value = val;
	new_instance.strength = strength;
	return new_instance;
}

net_level_t new_net_level(value_t val) {
	return new_net_level(val, strong);
}


void NetFlow::print_flow(int numOfChange) const {
	char charBuff[4];
	if (numOfChange<0) {
		numOfChange = data.size();
	}
	printf("%s: ", name);
	for (int i = 0; i < numOfChange; i++) {
		net_change_t* change = data.get(i);
		to_string(change->level, charBuff);
		printf("   %lld: %s", change->time, charBuff);
	}
	printf("\n");
}


bool NetFlow::is_equal_at(net_level_t level, simtime_t time) const {
	return is_equal_at(level.value, time);
}

void NetFlow::generate_clock(simtime_t period, simtime_t until, value_t start_value) {
	generate_clock(period, engine->get_current_time(), until, start_value);
}


void NetFlow::generate_clock(simtime_t half_period, simtime_t from, simtime_t until, value_t start_value) {

	while (from < until) {
		set_at(new_net_level(start_value), from);

		if (LOW == start_value) {
			start_value = HIGH;
		}
		else {
			start_value = LOW;
		}
		from += half_period;
	}
}