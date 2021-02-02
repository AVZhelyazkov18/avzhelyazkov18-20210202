#include "avzhelyazkov18.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<LAPTOP> laptops;
	LAPTOP chosenLaptop;

	initLaptops(laptops);
	showLaptops(laptops);
	chosenLaptop = enterLaptop(chosenLaptop);
	createLaptop(laptops,chosenLaptop);
	showLaptops(laptops);
	findGPUsByLaptop(laptops);
	showLaptops(laptops);
}