#ifndef CALCULATOR_H
#define CALCULATOR_H


#include <string>

class Calculator {
public:
    /* Constructor */
    Calculator();

    /* Calculator Methods*/
    /* Overloading the ADD Method */
    int add(int firstNumber, int secondNumber);
    int add(int firstNumber, int secondNumber, int thirdNumber);
    float add(float firstFloat, float secondFloat);
    std::string add(std::string firstString, std::string secondString);
};


#endif //CALCULATOR_H
