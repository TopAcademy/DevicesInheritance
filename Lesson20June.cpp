#include <iostream>
#include "Camera.h"
#include "Phone.h"
#include "SmartPhone.h"

int main()
{
	SmartPhone xiaomi("Xiaomi X10");
	xiaomi.set_name("Lenovo");
	xiaomi.who_am_i();
	xiaomi.make_call();
	xiaomi.off();
}

