#pragma once
#include <string>
#include <vector>
#include <iostream>

struct LAPTOP {
	std::string mf = ""; //-- manufacturer
	std::string CPU = "";
	std::string GPU = "";
	int dateOfRelease = 0;
};

void initLaptops(std::vector<LAPTOP> &laptops);
void showLaptop(std::vector<LAPTOP>& laptops, int index);
void createLaptop(std::vector<LAPTOP>& laptops, LAPTOP laptop);
LAPTOP enterLaptop(LAPTOP laptop);
void showLaptops(std::vector<LAPTOP>& laptops);
std::vector<LAPTOP> findGPUsByLaptop(std::vector<LAPTOP>& laptops);