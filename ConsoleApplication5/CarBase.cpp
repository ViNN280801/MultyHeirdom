#include "stdafx.h"
#include "CarBase.h"
#include <iostream>

using namespace std;

CarBase::CarBase()
{
	model = "Lexus";
}

CarBase::~CarBase()
{
}

wheels::wheels()
{
	CarWheels = 4;
}

wheels::~wheels()
{
}

steam::steam()
{
	CarSteam = 1;
}

steam::~steam()
{
}

doors::doors()
{
	CarDoors = 4;
}

doors::~doors()
{
}
