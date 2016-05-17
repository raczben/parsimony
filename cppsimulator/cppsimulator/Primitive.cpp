#include "Primitive.h"



Primitive::Primitive(const char* name, bool calculateCodeDone): calculateCodeDone(calculateCodeDone)
{
	this->name = name;
}


Primitive::~Primitive()
{
}
