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
	net->generate_clock(5, 0, 40);
	//net->set_now(new_net_level(HIGH));

	printf("run to 5 \n");
	fflush(stdout);
	engine->run(5);


	engine->get_net(NET_INDEX_ENABLE_A0_B)->set_now(new_net_level(HIGH));
	engine->get_net(NET_INDEX_RST_A0_B)->set_now(new_net_level(HIGH));
	//engine->get_net(NET_INDEX_Q_A0_B)->set_now(new_net_level(HIGH));
	//engine->get_net(NET_INDEX_OUT_A0_B)->set_now(new_net_level(HIGH));


	//printf("generating clock2 ... \n");
	//fflush(stdout);
	//net->set_now(new_net_level(LOW));
	


	printf("run to 10 \n");
	fflush(stdout);
	engine->run(50);


	//printf("generating clock3 ... \n");
	//fflush(stdout);
	//net->set_now(new_net_level(HIGH));

	//printf("run to 10 \n");
	//fflush(stdout);
	//engine->run(5);

	net->print_flow();

	VCDWiter vcdWriter("parsimony.vcd");
	vcdWriter.write_vcd();

	printf("Exiting... \n By");
	fflush(stdout);



	return 0;
}

