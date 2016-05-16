#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "sim_types.h"

class Primitive
{
private:
	const char * name;
public:
	Primitive(const char*);
	~Primitive();


	virtual void calculate(simtime_t time) = 0;
	
};

#endif // PRIMITIVE_H