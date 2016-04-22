// csimulator.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "NetFlow.h"
#include "simulator_base.h"
#include "SimulatorEngine.h"
#include "netinstatiation.h"
#include "Primitive.h"
#include "shared.h"
#include "VCDWiter.h"

/**
*Global engine of simulation.
*/
SimulatorEngine *engine;

void instance_primitives(SimulatorEngine* engine);
void instance_nets(SimulatorEngine* engine);

int main()
{

	/*NetFlow *a, *b;

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
	*/


	printf("Im started!\n");
	fflush(stdout);

	NetFlow * net;

	printf("Creating simulator engine ... ");
	fflush(stdout);
	engine = new SimulatorEngine();
	printf("    [  OK  ]\n");
	fflush(stdout);

	printf("Instance nets ... ");
	fflush(stdout);
	instance_nets(engine);
	printf("    [  OK  ]\n");
	fflush(stdout);

	printf("Instance primitives ... ");
	fflush(stdout);
	instance_primitives(engine);
	printf("    [  OK  ]\n");
	fflush(stdout);

	printf("Start generating clock ... \n");
	fflush(stdout);
	net = (engine->get_net(NET_INDEX_CLK_A0_B));
	net->set_now(new_net_level(HIGH));

	printf("run to 5 \n");
	fflush(stdout);
	engine->run(5);


	printf("generating clock2 ... \n");
	fflush(stdout);
	net->set_now(new_net_level(LOW));
	


	printf("run to 10 \n");
	fflush(stdout);
	engine->run(5);


	printf("generating clock3 ... \n");
	fflush(stdout);
	net->set_now(new_net_level(HIGH));

	printf("run to 10 \n");
	fflush(stdout);
	engine->run(5);

	/*
	printf("Stepping time ... \n");
	fflush(stdout);

	engine->step_time();
	printf(". \n");
	fflush(stdout);
	engine->step_time();
	printf(". \n");
	fflush(stdout);
	engine->step_time();
	printf(". \n");
	fflush(stdout);
	engine->step_time();
	printf(". \n");
	fflush(stdout);
	engine->step_time();

	printf("Setting clock again ... \n");
	fflush(stdout);
	net->set_now(new_net_level(LOW));
	engine->step_time();
	*/
	net->print_flow();

	VCDWiter vcdWriter("parsimony.vcd");
	vcdWriter.write_vcd();
	//write_vcd();

	printf("Exiting... \n By");
	fflush(stdout);

	return 0;
}

