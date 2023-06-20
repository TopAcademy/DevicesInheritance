#pragma once
#include "Device.h"

class Phone : virtual public Device
{
public:
	Phone(std::string _name);
	void make_call();
	void off();
};

// Constructor
Phone::Phone(std::string _name) : Device(_name)
{
	std::cout << "Phone created" << std::endl;
}

// Make call 
void Phone::make_call()
{
	std::cout << "Connect with abonent and speak" << std::endl;
}

// Switch off the phone
void Phone::off()
{
	std::cout << "Hold the power button" << std::endl;
}
