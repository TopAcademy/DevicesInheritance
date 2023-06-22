#pragma once
#include <iostream>
#include <string>

class Device
{
protected:
	std::string model_name;
public:
	Device() : model_name("") {};
	Device(std::string _name);
	void who_am_i();
	virtual void what_can_i_do();
	// abstract funcs
	virtual void off() = 0;
};

// Constructor with param
Device::Device(std::string _name)
{
	model_name = _name;
	std::cout << "Device created" << std::endl;
}


// Show model name on screen
void Device::who_am_i()
{
	std::cout << "I am: " << model_name << std::endl;
}

// What can do the device
void Device::what_can_i_do()
{
	std::cout << "Nothing to do - I'm just an absctact device\n";
}
