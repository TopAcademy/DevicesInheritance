#pragma once
#include "Phone.h"
#include "Camera.h"

class SmartPhone : public Phone, public Camera
{
public:
	SmartPhone(std::string _name);
	void set_name(std::string _name);
	int off();
};


// Constructor
SmartPhone::SmartPhone(std::string _name) : Phone(_name), Camera(_name)
{
	std::cout << "SmartPhone created" << std::endl;
}

// Set new name for object
void SmartPhone::set_name(std::string _name)
{
	model_name = _name;
}

// Switch off the camera
int SmartPhone::off()
{
	std::cout << "Select the off menu item" << std::endl;
	return 0;
}
