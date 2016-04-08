#ifndef SIMULATOR_TYPES_H
#define SIMULATOR_TYPES_H

typedef struct net_flow_struct net_flow_t;
typedef long long simtime_t;

typedef char primitive_t;
typedef char driver_t;
typedef char reader_t;

class NetFlow;
class SimulatorEngine;

typedef char* parameter_string_t;
typedef char* parameter_int_t;

typedef enum { TRUE, FALSE} parameter_enumt_t;

#endif //SIMULATOR_TYPES_H