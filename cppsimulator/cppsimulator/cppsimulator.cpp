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


#define LUT6_TEST 0
#define TEST_DUT_TEST 1
#define CARRY4_TEST 2

#define TEST_TEST_CASE TEST_DUT_TEST


#if (TEST_TEST_CASE == LUT6_TEST)
void run_LUT6_test_stumulus() {

	engine->get_net(NET_INDEX_ADDR_A0_B)->generate_clock(5, 0, 1000);
	engine->get_net(NET_INDEX_ADDR_A1_B)->generate_clock(10, 0, 1000);
	engine->get_net(NET_INDEX_ADDR_A2_B)->generate_clock(20, 0, 1000);
	engine->get_net(NET_INDEX_ADDR_A3_B)->generate_clock(40, 0, 1000);
	engine->get_net(NET_INDEX_ADDR_A4_B)->generate_clock(80, 0, 1000);
	engine->get_net(NET_INDEX_ADDR_A5_B)->generate_clock(160, 0, 1000);


	printf("run to 5 \n");
	fflush(stdout);
	engine->run(5);


	printf("run to 10 \n");
	fflush(stdout);
	engine->run(1000);

}
#endif //(TEST_TEST_CASE == TEST_DUT_TEST)

#if (TEST_TEST_CASE == CARRY4_TEST)
void run_CARRY4_test_stumulus() {
	engine->get_net(NET_INDEX_S_A0_B)->generate_clock(5, 0, 10000);
	engine->get_net(NET_INDEX_S_A1_B)->generate_clock(10, 0, 10000);
	engine->get_net(NET_INDEX_S_A2_B)->generate_clock(20, 0, 10000);
	engine->get_net(NET_INDEX_S_A3_B)->generate_clock(40, 0, 10000);
	engine->get_net(NET_INDEX_DI_A0_B)->generate_clock(80, 0, 10000);
	engine->get_net(NET_INDEX_DI_A1_B)->generate_clock(160, 0, 10000);
	engine->get_net(NET_INDEX_DI_A2_B)->generate_clock(320, 0, 10000);
	engine->get_net(NET_INDEX_DI_A3_B)->generate_clock(640, 0, 10000);
	engine->get_net(NET_INDEX_CI_A0_B)->generate_clock(1280, 0, 10000);
	engine->get_net(NET_INDEX_CYINIT_A0_B)->generate_clock(2560, 0, 10000);
	//engine->get_net(NET_INDEX_O_A0_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_O_A1_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_O_A2_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_O_A3_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_CO_A0_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_CO_A1_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_CO_A2_B)->generate_clock(5, 0, 1000);
	//engine->get_net(NET_INDEX_CO_A3_B)->generate_clock(5, 0, 1000);

	printf("run to 5 \n");
	fflush(stdout);
	engine->run(5);

	printf("run to 10 \n");
	fflush(stdout);
	engine->run(10000);

}
#endif //(TEST_TEST_CASE == CARRY4_TEST)

#if (TEST_TEST_CASE == TEST_DUT_TEST)
void run_TEST_DUT_test_stimulus() {
	NetFlow * net;
	printf("Start generating clock ... \n");
	fflush(stdout);
	net = (engine->get_net(NET_INDEX_CLK_A0_B));
	net->generate_clock(5, 0, 400);

	printf("run to 5 \n");
	fflush(stdout);
	engine->run(5);


	engine->get_net(NET_INDEX_ENABLE_A0_B)->set_now(new_net_level(HIGH));
	engine->get_net(NET_INDEX_RST_A0_B)->set_now(new_net_level(HIGH));


	engine->run(15);
	engine->get_net(NET_INDEX_RST_A0_B)->set_now(LOW);


	printf("run to 10 \n");
	fflush(stdout);
	engine->run(400);

}
#endif

void start_simulation() {
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

	printf("Driving constant signals ... ");
	fflush(stdout);
	net = (engine->get_net(NET_INDEX_CONST__ONE_A0_B));
	net->set_now(HIGH);
	net = (engine->get_net(NET_INDEX_CONST__ZERO_A0_B));
	net->set_now(LOW);
	printf("    [  OK  ]\n");
	fflush(stdout);

}

int main()
{
	start_simulation();

	/*************************************************
	* STimulus here:
	**************************************************/
#if TEST_TEST_CASE == LUT6_TEST
	run_LUT6_test_stumulus();
#endif
#if TEST_TEST_CASE == TEST_DUT_TEST
	run_TEST_DUT_test_stimulus();
#endif

#if (TEST_TEST_CASE == CARRY4_TEST)
	run_CARRY4_test_stumulus();
#endif

	//net->print_flow();

	VCDWiter vcdWriter("parsimony.vcd");
	vcdWriter.write_vcd();

	printf("Exiting... \n By");
	fflush(stdout);



	return 0;
}

