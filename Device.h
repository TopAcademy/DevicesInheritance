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
	void off();
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

// Switch off the device
void Device::off()
{
	std::cout << "I don't know what to do..." << std::endl;
}