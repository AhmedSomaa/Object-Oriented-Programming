#ifndef RECTANGLE_H
#define RECTANGLE_H

/** Class representing a rectangle. */
class Rectangle {
private:
    float width;
    float length;

public:
    /* Constructor */
    Rectangle(float length, float width);

    /* Setters */
    void setWidth(float width);
    void setLength(float length);

    /* Getters */
    float getArea();
    float getWidth();
    float getLength();
};


#endif //RECTANGLE_H
