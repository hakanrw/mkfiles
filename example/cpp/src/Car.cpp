#include "Car.hpp"
#include <iostream>

// Constructor
Car::Car(std::string brand, std::string model, int year) {
    this->brand = brand;
    this->model = model;
    this->year = year;
}

// Destructor
Car::~Car() {
    // Destructor implementation, if needed
}

// Getter methods
std::string Car::getBrand() const {
    return brand;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

// Setter methods
void Car::setBrand(std::string brand) {
    this->brand = brand;
}

void Car::setModel(std::string model) {
    this->model = model;
}

void Car::setYear(int year) {
    this->year = year;
}

// Other methods
void Car::displayInfo() const {
    std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
}
