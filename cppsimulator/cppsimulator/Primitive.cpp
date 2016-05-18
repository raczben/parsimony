#include "Primitive.h"



#if DEBUG == 1
Primitive::Primitive(
	const char* name, 
	bool calculateCodeDone): calculateCodeDone(calculateCodeDone)
{
	this->name = name;
}
#endif

Primitive::Primitive(
	bool calculateCodeDone) : calculateCodeDone(calculateCodeDone)
{ }

Primitive::~Primitive()
{
}
