#pragma once
class Primitive
{
private:
	const char * name;
public:
	Primitive(const char*);
	~Primitive();


	virtual void calculate(int time) = 0;
	
};

