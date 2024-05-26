#include <iostream>
#include "include/Car.hpp"

int main() {
	Car* car = new Car("Peugeot", "2008", 2024);
	car->displayInfo();
	return 0;
}
