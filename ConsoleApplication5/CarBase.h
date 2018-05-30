#pragma once
#include <iostream>
using namespace std;
class CarBase
{
public:
	CarBase();

	string model;
	size_t CarWheels;
	size_t CarSteam;
	size_t CarDoors;
	void ShowComponents();

	~CarBase();
};

class wheels:public CarBase
{
public:
	wheels();
	~wheels();
};
class steam:public CarBase
{
public:
	steam();
	~steam();
};

class doors :public CarBase
{
public:
	doors();
	~doors();
};