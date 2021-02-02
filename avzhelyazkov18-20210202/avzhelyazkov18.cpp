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

	laptops.push_back(laptop1);
	laptops.push_back({ "MSI", "Intel Core I7", "Geforce 2060", 2020 });
	laptops.push_back({ "MSI1", "Intel Core I7", "Geforce 2060", 2020 });
	laptops.push_back({ "MSI2", "Intel Core I7", "Geforce 2060", 2020 });
	laptops.push_back({ "MSI3", "Intel Core I7", "Geforce 2060", 2020 });

}

void showLaptop(vector<LAPTOP>& laptops,int index)
{
	if (laptops.at(index).mf != "" or laptops.at(index).mf != " ")
		cout << laptops.at(index).mf << ", " << laptops.at(index).CPU << ", " << laptops.at(index).GPU << ", " << laptops.at(index).dateOfRelease << "." << endl;
}

void createLaptop(vector<LAPTOP>& laptops, LAPTOP laptop) {
	laptops.push_back(laptop);
}

LAPTOP enterLaptop(LAPTOP laptop) {
	cout << "Enter Manufacturer: "; cin >> laptop.mf;
	cin.ignore();
	cout << "CPU Example: (Intel I7/I5)" << endl;
	cout << "Enter CPU: "; getline(cin, laptop.CPU);
	cout << "GPU Example: (Geforce 970M/1050Ti/960M/etc.)" << endl;
	cin.ignore();
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
	vector<LAPTOP> foundLaptops = {};

	cout << "Example: (AMD/Intel)" << endl;
	cout << "Choose what type of cpu to find: "; cin >> chosenCPU;

	for (int i = 0; i < laptops.size(); i++) {
		if (laptops.at(i).CPU.find(chosenCPU)) {
			foundLaptops.at(foundLaptops.size() + 1) = laptops.at(i);
		}
	}

	return foundLaptops;
}