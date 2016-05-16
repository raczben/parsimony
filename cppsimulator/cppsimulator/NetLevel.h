/******************************************************************************
* NetLevel.h
*
* created by: Benedek Racz
*       date: 2016. 05. 11.
*****************************************************************************/
#ifndef NET_LEVEL_H
#define NET_LEVEL_H

#include "sim_types.h"

/*******************************************************************************
* value_t is an enum which can be LOW (means 0), HIGH (means 1)
* UNDEFINED (means could be any 1 or 0), HIGH_Z (means there is no driver
* of this value)
******************************************************************************/
typedef enum : unsigned {
	LOW = 0,
	HIGH = 1,
	UNDEFINED = 2,
	HIGH_Z = 3
} value_t;


/*******************************************************************************
* to_string() convert value_t enum to a human readable form.
******************************************************************************/
static const char *to_string(value_t f)
{
	static const char *strings[] = { "LOW", "HIGH", "UNDEFINED", "HIGH_Z" };
	return strings[f];
}


/*******************************************************************************
* strength_t is an enum which shows the drive strength of a net. See verilog
* LRM for details.
******************************************************************************/
typedef enum : unsigned {
	highz = 0,
	small = 1,
	medium = 2,
	weak = 3,
	large = 4,
	pull = 5,
	strong = 6,
	supply = 7
} strength_t;


/*******************************************************************************
* to_string() convert strength_t enum to a human readable form.
******************************************************************************/
static const char *to_string(strength_t f)
{
	static const char *strings[] = { "highz", "small", "medium", "weak", "large", "pull", "strong", "supply" };
	return strings[f];
}



/*
supply0, supply1,
strong0, strong1, pull0, pull1, weak0, weak1,
highz0, highz1, small, medium, large
*/


/*******************************************************************************
* net_level_t is a structure which contains a net level (strength and value) at
* a specific time.
******************************************************************************/
struct net_level_struct {
	value_t value : 2;
	strength_t strength : 3;
};
typedef struct net_level_struct net_level_t;


/*******************************************************************************
* new_net_level() functions returns a new net level structure with the given
* value and strength. (Default strength is strong.)
******************************************************************************/
net_level_t new_net_level(value_t val, strength_t strength = strong);

//net_level_t new_net_level(value_t val);


/*******************************************************************************
* to_string() convert net_level_t enum to a human readable form. It requires at
* least 4 character long charBuffer.
******************************************************************************/
static char *to_string(net_level_t f, char *charBuffer)
{
	char *ret = charBuffer;
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
	ret[2] = '?';
	return ret;
}


/*******************************************************************************
* net_change_struct is a structure which contains a level change on a net.
* It stores the new level and the time of the change.
******************************************************************************/
struct net_change_struct {
	net_level_t level;
	simtime_t time;
};
typedef struct net_change_struct net_change_t;

const net_level_t NET_LEVEL_DUMMY_VAL2 = { // or maybe FOO_DEFAULT or something
	 UNDEFINED, strong 
};


const simtime_t TIME_DUMMY_VAL2 =  // or maybe FOO_DEFAULT or something
	UINT64_MAX;

const net_change_t NET_CHANGE_DUMMY_VAL2 = { // or maybe FOO_DEFAULT or something
	NET_LEVEL_DUMMY_VAL2, (simtime_t)UINT64_MAX
};

#define NET_CHANGE_DUMMY_VAL = ( { { UNDEFINED, strong },(simtime_t)UINT64_MAX } )

#endif // NET_LEVEL_H
