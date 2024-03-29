#pragma once
#include "vehicle.h"

class bike : public vehicle
{
public:
	char* bike_name;
	int bike_number;

	bike();
	explicit bike(int wheel_number, int max_speed);
	explicit bike(int wheel_number, int max_speed, char* bike_name);
	explicit bike(int wheel_number, int max_speed, char* bike_name, int bike_number);
	explicit bike(int wheel_number, int max_speed, char* bike_name, int bike_number, bool has_name);

	int get_bike_number();
	char* get_bike_name();
	const char* get_class_name();

	void set_bike_name(char* bike_name);
	void set_bike_number(int bike_number);
};
