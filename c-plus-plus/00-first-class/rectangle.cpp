#include "rectangle.h"

/**
 * Create a rectangle.
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
    this->width = width;
}

/**
 * Sets the length value
 * @return {void}
 */
void Rectangle::setLength(float length) {
    this->length = length;
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