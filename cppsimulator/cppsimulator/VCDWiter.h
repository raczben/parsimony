#ifndef VCDWRITER_H
#define VCDWRITER_H

#include <map>
#include <vector>
#include "NetFlow.h"

typedef struct {
	char net_id;
	char value;
}vcd_node;


class VCDWiter
{
private:
	char* filename = nullptr;

	std::map <const char*, char> netIDToName;
	std::map <int, std::vector<vcd_node> > vcdData;

public:
	VCDWiter(char* filename = nullptr);


	void VCDWiter::fillVCDData();


	~VCDWiter();


	void write_vcd(char* filename = nullptr);

	void printVCDData();

	static char net_value2vcd_char(const value_t val);
};

#endif

