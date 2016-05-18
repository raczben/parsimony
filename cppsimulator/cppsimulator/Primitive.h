#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "sim_types.h"

#define DEBUG 1

class Primitive
{
private:
#if DEBUG == 1
	const char * name;
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
	
};

#endif // PRIMITIVE_H