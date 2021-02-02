#include "avzhelyazkov18.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void initLaptops(vector<LAPTOP> &laptops)
{
	LAPTOP laptop1;
	laptop1.mf = "Asus";
	laptop1.dateOfRelease = 2017;
	laptop1.CPU = "Intel I7";
	laptop1.GPU = "Geforce 960M";

	LAPTOP laptop2;
	laptop2.mf = "Lenovo";
	laptop2.dateOfRelease = 2018;
	laptop2.CPU = "Intel I5";
	laptop2.GPU = "Geforce 1050Ti";

	LAPTOP laptop3;
	laptop3.mf = "Asus";
	laptop3.dateOfRelease = 2016;
	laptop3.CPU = "Intel I5";
	laptop3.GPU = "Geforce 940M";

	LAPTOP laptop4;
	laptop4.mf = "MSI";
	laptop4.dateOfRelease = 2020;
	laptop4.CPU = "Intel I7";
	laptop4.GPU = "Geforce 2060";

	laptops[0] = laptop1;
	laptops[1] = laptop2;
	laptops[2] = laptop3;
	laptops[3] = laptop4;
}

void showLaptop(vector<LAPTOP>& laptops,int index)
{
	if (laptops.at(index).mf != "" or laptops.at(index).mf != " ")
		cout << laptops.at(index).mf << ", " << laptops.at(index).CPU << ", " << laptops.at(index).GPU << ", " << laptops.at(index).dateOfRelease << "." << endl;
}

void createLaptop(vector<LAPTOP>& laptops, LAPTOP laptop) {
	size_t size = laptops.size();
	laptops.at(size + 1) = laptop;
}

LAPTOP enterLaptop(LAPTOP laptop) {
	cout << "Enter Manufacturer: "; cin >> laptop.mf;
	cout << "CPU Example: (Intel I7/I5)" << endl;
	cout << "Enter CPU: "; getline(cin, laptop.CPU);
	cout << "GPU Example: (Geforce 970M/1050Ti/960M/etc.)" << endl;
	cout << "Enter GPU: "; getline(cin, laptop.GPU);
	cout << "Enter Date Of Release: "; cin >> laptop.dateOfRelease;
	return laptop;
}

void showLaptops(vector<LAPTOP>& laptops) {
	for (int i = 0; i < laptops.size(); i++) {
		if (laptops.at(i).mf != "" or laptops.at(i).mf != " ")
			showLaptop(laptops, i);
	}
}

vector<LAPTOP> findGPUsByLaptop(vector<LAPTOP>& laptops) {
	string chosenCPU;
	cout << "Example: (AMD/Intel)" << endl;
	cout << "Choose what type of cpu to find: "; cin >> chosenCPU;
	vector<LAPTOP> foundLaptops = {};
	for (int i = 0; i < laptops.size(); i++) {
		if (laptops.at(i).CPU.find(chosenCPU)) {
			foundLaptops.at(foundLaptops.size() + 1) = laptops.at(i);
		}
	}
	return foundLaptops;
}