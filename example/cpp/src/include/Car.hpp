#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Constructor
    Car(std::string brand, std::string model, int year);

    // Destructor
    ~Car();

    // Getter methods
    std::string getBrand() const;
    std::string getModel() const;
    int getYear() const;

    // Setter methods
    void setBrand(std::string brand);
    void setModel(std::string model);
    void setYear(int year);

    // Other methods
    void displayInfo() const;
};

#endif /* CAR_HPP */
