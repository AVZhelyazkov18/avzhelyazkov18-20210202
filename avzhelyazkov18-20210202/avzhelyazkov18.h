#pragma once
#include <string>
#include <vector>
#include <iostream>

struct LAPTOP {
	std::string mf; //-- manufacturer
	std::string CPU;
	std::string GPU;
	int dateOfRelease;
};

void initLaptops(std::vector<LAPTOP> &laptops);
void showLaptop(std::vector<LAPTOP>& laptops, int index);
void createLaptop(std::vector<LAPTOP>& laptops);
void enterLaptop(std::vector<LAPTOP>& laptops);
void showLaptops(std::vector<LAPTOP>& laptops);