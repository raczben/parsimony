// csimulator.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "NetFlow.h"
#include "simulator_base.h"
#include "SimulatorEngine.h"

/**
*Global engine of simulation.
*/
SimulatorEngine engine;

int main()
{
	NetFlow *a, *b;

	printf("Im started!\n");
	fflush(stdout);

	a = new NetFlow("a", new_net_level(HIGH), true);
	b = new NetFlow("b", new_net_level(LOW), true);

	printf("Instances done!\n");
	fflush(stdout);

	engine.register_net(a);
	engine.register_net(b);
	engine.step_time();

	printf("Step time success!\n");
	fflush(stdout);

	a->set_now(new_net_level(LOW));

	printf("new value ok!\n");

	engine.step_time();
	engine.step_time();

	b->set_now(new_net_level(HIGH));

	printf("Everythink seems OK! Just one step: Exititng...\n");

	return 0;
}

