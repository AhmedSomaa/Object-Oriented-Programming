#include <iostream>
#include "rectangle.h"

/**
 * Create an empty rectangle.
 */
Rectangle::Rectangle() {}

/**
 * Create a rectangle with the specified dimensions.
 * @param {float} length - the length value.
 * @param {float} width - the width value.
 */
Rectangle::Rectangle(float length, float width){
    this->width = width;
    this->length = length;
}

/**
 * Sets the width value.
 * @return {void}
 */
void Rectangle::setWidth(float width) {
    if(width >= 0) {
        this->width = width;
    } else {
        std::cerr << "[Error] Width value cannot be negative, please enter a positive value.";
    }
}

/**
 * Sets the length value
 * @return {void}
 */
void Rectangle::setLength(float length) {
    if(length >= 0) {
        this->length = length;
    } else {
        std::cerr << "[Error] Length value cannot be negative, please enter a positive value.";
    }
}

/**
 * Get the width value.
 * @return {float} The width value.
 */
float Rectangle::getWidth() {
    return this->width;
}

/**
 * Get the length value.
 * @return {float} The length value.
 */
float Rectangle::getLength() {
    return this->length;
}

/**
 * Computes the area of a rectangle.
 * @return {float} The area of a rectangle.
 */
float Rectangle::getArea() {
    return (this->length * this->width);
}