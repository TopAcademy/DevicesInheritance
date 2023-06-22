#pragma once
#include "Phone.h"

class SmartPhone : public Phone
{
public:
	SmartPhone(std::string _name);
	void set_name(std::string _name);
	void browse_internet();
	void off(); // override
	virtual void what_can_i_do();
};


// Constructor
SmartPhone::SmartPhone(std::string _name) : Phone(_name)
{
	std::cout << "SmartPhone created" << std::endl;
}

// Set new name for object
void SmartPhone::set_name(std::string _name)
{
	model_name = _name;
}

// Switch off the camera
void SmartPhone::off()
{
	std::cout << "Select the off menu item" << std::endl;
}

// Browse internet
void SmartPhone::browse_internet()
{
	std::cout << "Open browser and enter URL" << std::endl;
}


// What can do the device
void SmartPhone::what_can_i_do()
{
	std::cout << "I can do many cool things\n";
}