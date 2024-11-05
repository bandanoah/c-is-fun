#ifndef MY_CARS_H
#define MY_CARS_H
/**
 * struct car - A structure representing a car.
 * @engine: a pointer to a string representing the engine type.
 * @fuel_type: A pointer to a string representing the fuel type.
 * @fuel_tank_cap: An integer representing the fuel tank capacity in liters.
 * @seating_cap: An integer representing the seating capacity.
 * @city_mileage: A float representing the city mileage in k/l.
 */

/* Sturcture definition for car details*/
struct car
{
	char *engine;
	char *fuel_type;
	int fuel_tank_cap;
	int seating_cap;
	float city_mileage;
}
car1, car2;

#endif
