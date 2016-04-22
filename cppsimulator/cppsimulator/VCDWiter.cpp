#include "VCDWiter.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include <fstream>
#include <iostream>
#include "shared.h"
#include <map>


VCDWiter::VCDWiter(char* filename)
{
	if (nullptr != filename) {
		this->filename = strdup(filename);
	}
	else {
		this->filename = nullptr;
	}
}




VCDWiter::~VCDWiter()
{
	if (filename)
		free(filename);
}

void VCDWiter::fillVCDData(){
	NetFlow * net;
	char id = '!';
	for (int netIndex = 0; netIndex < engine->get_net_count(); netIndex++) {
		net = engine->get_net(netIndex);
		netIDToName.insert(std::pair<const char*, char>(net->get_name(), id));
		
		base::Vector<net_change_t*> data = net->get_data();
		for (int i = 0; i < data.size(); i++) {
			net_change_t* net_change = data.get(i);
			const char* val = to_string(net_change->level.value);

			vcd_node node;
			node.net_id = id;
			node.value = net_value2vcd_char(net_change->level.value);
			std::map<int, std::vector<vcd_node> >::iterator it = vcdData.find(net_change->time);
			if (it == vcdData.end()) {
				std::vector<vcd_node> vec;// = new std::vector<vcd_node>();
				vec.push_back(node);
				int time = net_change->time;
				vcdData.insert(std::pair<int, std::vector<vcd_node> > (time, vec) );
			}
			else { //key exist
				it->second.push_back(node);
			}
		}
		

		id++;
	}
}

char VCDWiter::net_value2vcd_char(const value_t val) {
	switch (val) {
	case UNDEFINED:
		return 'x';
	case HIGH:
		return '1';
	case LOW:
		return '0';
	case HIGH_Z:
		return 'z';
	default:
		return 0;
	}
}


void VCDWiter::write_vcd(char* filename_ ) {
	if (nullptr != filename_) {
		this->filename = strdup(filename_);
	}
	if (nullptr == filename) {
		printf("ERROR: filename is nullptr");
	}
	std::ofstream myfile;
	myfile.open(filename);

	fillVCDData();
	printVCDData();


	myfile << "$date"<<std::endl;
	myfile << "<date_and_time_specification>" << std::endl;
	myfile << "$end" << std::endl;
	myfile << "$version" << std::endl;
	myfile << "ParSimony" << std::endl;
	myfile << "$end" << std::endl;
	myfile << "$timescale" << std::endl;
	myfile << "1 ns" << std::endl;
	myfile << "$end" << std::endl;
	myfile << "" << std::endl;

	myfile << "$scope module top $end" << std::endl;

	for (std::map<const char* const, char >::iterator it = netIDToName.begin(); it != netIDToName.end(); it++) {
		myfile << "$var wire 1 " << it->second << " " << it->first << " $end" << std::endl;
	}

	myfile << "" << std::endl;


	myfile << "$upscope $end" << std::endl;
	myfile << "$enddefinitions $end" << std::endl;
	for (std::map<int , std::vector<vcd_node> >::iterator it = vcdData.begin(); it != vcdData.end(); it++) {
		int time = it->first;
		std::vector<vcd_node> changes = it->second;
		myfile << "#" << time << std::endl;
		for (std::vector<vcd_node>::iterator chit = changes.begin(); chit != changes.end(); chit++) {
			myfile << chit->value << chit->net_id << std::endl;
			chit->net_id;
			chit->value;
		}

	}
	myfile << "#" << engine->get_current_time() << std::endl;
	//myfile << "$dumpvars" << std::endl;

	myfile.close();
}

void VCDWiter::printVCDData() {
	/*for vcdData() {
		
	}*/


}