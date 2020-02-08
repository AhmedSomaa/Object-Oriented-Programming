#include "rectangle.h"
#include <iostream>

int main() {

    /**
     * Create a rectangle using empty constructor.
     * Needs setter functions to set the rectangle dimensions.
     */
    Rectangle rectangle;
    rectangle.setWidth(40);
    rectangle.setLength(20);

    std::cout << "First Rectangle Details\n=======================\n";
    std::cout << "Width:: " << rectangle.getWidth() << "\n";
    std::cout << "Length:: " << rectangle.getLength() << "\n";
    std::cout << "Area:: " << rectangle.getArea() << "\n\n";


    /**
     * Create a rectangle using overloaded constructor.
     */
    Rectangle Box(80, 40);
    std::cout << "Second Rectangle Details\n========================\n";
    std::cout << "Width:: " << Box.getWidth() << "\n";
    std::cout << "Length:: " << Box.getLength() << "\n";
    std::cout << "Area:: " << Box.getArea() << "\n";

    return 0;
}
