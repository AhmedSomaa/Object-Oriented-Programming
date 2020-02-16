#include <iostream>
#include "calculator.h"

int main() {

    /* Create a Calculator Object
     * and use the Overloaded Method Add
     */

    Calculator calculator;

    std::cout << "==============================\n      Method Overloading\n==============================\n";
    std::cout << "This is the original add method => Sum of Two Integers:: " << calculator.add(39, 37) << "\n";
    std::cout << "This is the overloaded version to add three numbers => Sum of Three Integers:: " << calculator.add(39, 37, 3) << "\n";
    std::cout << "This is the overloaded version to add two floats => Sum of Two Floats:: "<< calculator.add(10.3f, 3.7f) << "\n";
    std::cout << "This is the overloaded version to add two strings => Sum of Two Strings:: " << calculator.add("Hello", "World!!") << "\n";
    return 0;
}
