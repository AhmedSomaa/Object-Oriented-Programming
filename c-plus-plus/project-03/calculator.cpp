#include "calculator.h"

/**
 * Default Constructor.
 * Creates an empty calculator object.
 */
Calculator::Calculator() {}

/**
 * Adds Two Integer Numbers.
 * @param {int} firstNumber - First Number to add.
 * @param {int} secondNumber - Second Number to add.
 * @return {int} the Sum of the Two Numbers.
 */
int Calculator::add(int firstNumber, int secondNumber) {
    return (firstNumber + secondNumber);
}

/*
 * Overloads the Add Method to add Three Integer Numbers instead of Two.
 * @param {int} firstNumber - First Number to add.
 * @param {int} secondNumber - Second Number to add.
 * @param {int} thirdNumber - Third Number to add.
 * @return {int} the Sum of the Three Numbers.
 */
int Calculator::add(int firstNumber, int secondNumber, int thirdNumber) {
    return (firstNumber + secondNumber + thirdNumber);
}

/*
 * Overloads the Add Method to add Two float Numbers instead of Two Integers.
 * @param {float} firstNumber - First Number to add.
 * @param {float} secondNumber - Second Number to add.
 * @return {float} the Sum of the Two Numbers.
 */
float Calculator::add(float firstFloat, float secondFloat) {
    return (firstFloat + secondFloat);
}

/*
 * Overloads the Add Method to add Two Strings instead of Two Integers.
 * @param {string} firstString - First String to add.
 * @param {string} secondString - Second String to add.
 * @return {string} the Sum of the Two Strings.
 */
std::string Calculator::add(std::string firstString, std::string secondString) {
    return (firstString + " " + secondString);
}