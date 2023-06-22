#include <iostream>
#include "Camera.h"
#include "Phone.h"
#include "SmartPhone.h"

int main()
{
	const short dev_count = 4;
	// Create devices array
	Device * devices[dev_count];
	devices[0] = new Camera("Nikon");
	devices[1] = new Camera("Canon");
	devices[2] = new Phone("Nokia");
	devices[3] = new SmartPhone("Xiaomi");
	// Test devices
	std::cout << "--------------" << std::endl;
	devices[0]->what_can_i_do();
	devices[0]->who_am_i(); // CALL AF3405D8
	devices[1]->what_can_i_do(); // FIND ADR; CALL ADR
	devices[2]->what_can_i_do();
	devices[3]->what_can_i_do();
}

