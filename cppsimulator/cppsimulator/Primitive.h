#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "sim_types.h"
#include <limits.h>
#include <assert.h>

#define DEBUG 1


class Primitive
{
protected:
#if DEBUG > 0
	const char * name;
	int threadID = INT_MAX;
#endif
public:
	/*
	calculateCodeDone:
		false:  if the calculate function is pure virtual or if it is a template.
		true:	if the calculate function is implemented.
	*/
	const bool calculateCodeDone = false;
public:

#if DEBUG == 1
	Primitive(const char*, bool calculateCodeDone = false);
#endif

	Primitive( bool calculateCodeDone = false);

	~Primitive();

	/*
	Returns true if any output net of this primitive has been changed in the current simtime.
	*/
	virtual bool calculate(simtime_t time) = 0;

	void threadTouch(int newThreadID) {
		if (INT_MAX == threadID) {
			threadID = newThreadID;
			return;
		}
		assert(threadID == newThreadID);
	}

	const char* getName() const  {
		return name;
	}
	
};

#endif // PRIMITIVE_H