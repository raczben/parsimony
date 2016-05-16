#ifndef SIMULATOR_TYPES_H
#define SIMULATOR_TYPES_H

#include "stdint.h"
#include <inttypes.h>


typedef struct net_flow_struct net_flow_t;
typedef int64_t simtime_t;
//#define MAX_SIMTIME 


typedef char primitive_t;
typedef char driver_t;
typedef char reader_t;

class NetFlow;
class SimulatorEngine;
class RunnerWorker;
class SimRunnerThread;

typedef char* parameter_string_t;
typedef uint64_t parameter_int_t;

typedef unsigned char bit_t;

typedef enum { TRUE, FALSE} parameter_enum_t;

///////// Exception codes
typedef int exception_code_t;
#define NET_FLOW_VECTOR_IS_FULL ( (exception_code_t) ( 1001 ) )


#endif //SIMULATOR_TYPES_H