#pragma once
#include "Device.h"

class Camera : virtual public Device
{
public:
	Camera(std::string _name);
	void make_photo();
	void off();
};


// Constructor
Camera::Camera(std::string _name) : Device(_name)
{
	std::cout << "Camera created" << std::endl;
}

// Make photo
void Camera::make_photo()
{
	std::cout << "Taking picture and saving to memory\n";
}

// Switch off the camera
void Camera::off()
{
	std::cout << "Turn left the switcher" << std::endl;
}
