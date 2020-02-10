#include "car.h"
#include <iostream>

int main()
{
    /**
     * Create a car object with the default data member
     * values set by the default constructor.
     */

    Car car_1;
    std::cout << "Just bought a " << car_1.getColor() << " "  << car_1.getModel();
    std::cout << " " << car_1.getMakeYear() << " that uses " << car_1.getFuelType() << ".\n";
    car_1.start();
    car_1.stop();

    /**
     * to alter these default values,
     * we need to use the class member methods
     */
    car_1.setModel("Volkswagen Polo");
    car_1.setColor("red");
    car_1.setMakeYear("2017");
    car_1.setFuelType("Petrol");

    std::cout << "\nJust bought a " << car_1.getColor() << " "  << car_1.getModel();
    std::cout << " " << car_1.getMakeYear() << " that uses " << car_1.getFuelType() << ".\n";
    car_1.start();
    car_1.stop();


    /**
     * Create a car object with overloaded constructor.
     * Dont' need to use the setter methods to add the car info.
     */

    Car car_2("Volkswagen Vento", "black", "2017", "Diesel");

    std::cout << "\nJust bought a " << car_2.getColor() << " "  << car_2.getModel();
    std::cout << " " << car_2.getMakeYear() << " that uses " << car_2.getFuelType() << ".\n";
    car_2.start();
    car_2.stop();

    return 0;
}
