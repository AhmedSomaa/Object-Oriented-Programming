#ifndef CAR_H
#define CAR_H

#include <string>

/** Class representing a rectangle. */
class Car {
private:
    std::string model;
    std::string color;
    std::string makeYear;
    std::string fuelType;

public:
    /* Constructors */
    Car();
    Car(std::string model, std::string color, std::string makeYear, std::string fuelType);

    /* Setters */
    void setModel(std::string model);
    void setColor(std::string color);
    void setMakeYear(std::string makeYear);
    void setFuelType(std::string fuelType);

    /* Getters */
    std::string getModel();
    std::string getColor();
    std::string getMakeYear();
    std::string getFuelType();

    /* Car Functions */
    void start();
    void stop();
};


#endif //CAR_H
