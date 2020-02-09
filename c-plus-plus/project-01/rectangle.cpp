#include <iostream>
#include "rectangle.h"

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