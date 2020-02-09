#include <iostream>
#include <string>
#include "car.h"

/**
 * Empty Constructor.
 * Create a car.
 * @return {Car} An Empty car.
 */
Car::Car() {}

/**
 * Overloaded Constructor
 * Create a car.
 * @param {string} model - The car model value.
 * @param {string} color - The car color value.
 * @param {string} makeYear - The year in which the car is manufactured.
 * @param {string} fuelType - The fuel type the car uses.
 * @return {Car} A car with the overloaded arguments.
 */
Car::Car(std::string model, std::string color, std::string makeYear, std::string fuelType) {
    this->model = model;
    this->color = color;
    this->makeYear = makeYear;
    this->fuelType = fuelType;
}

/**
 * Sets the car model value.
 * @param {string} model - The car model value.
 * @return {void}
 */
void Car::setModel(std::string model) {
    this->model = model;
}

/**
 * Sets the car color value.
 * @param {string} color - The car color value.
 * @return {void}
 */
void Car::setColor(std::string color) {
    this->color = color;
}

/**
 * Sets the car makeYear value.
 * @param {string} makeYear - The year in which the car is manufactured.
 * @return {void}
 */
void Car::setMakeYear(std::string makeYear) {
    this->makeYear = makeYear;
}

/**
 * Sets the car fuelType value.
 * @param {string} fuelType - The fuel type the car uses.
 * @return {void}
 */
void Car::setFuelType(std::string fuelType) {
    this->fuelType = fuelType;
}

/**
 * Get the model value.
 * @return {string} The model value.
 */
std::string Car::getModel() {
    return this->model;
}

/**
 * Get the color value.
 * @return {string} The color value.
 */
std::string Car::getColor() {
    return this->color;
}

/**
 * Get the makYear value.
 * @return {string} The makeYear value.
 */
std::string Car::getMakeYear() {
    return this->makeYear;
}

/**
 * Get the fuelType value.
 * @return {string} The fuelType value.
 */
std::string Car::getFuelType() {
    return this->fuelType;
}

/**
 * Starts the car.
 * @return {void}.
 */
void Car::start() {
    std::cout << this->model + " " + this->makeYear + " started.\n";
}

/**
 * Stops the car.
 * @return {void}.
 */
void Car::stop() {
    std::cout << this->model + " " + this->makeYear + " stopped.\n";
}