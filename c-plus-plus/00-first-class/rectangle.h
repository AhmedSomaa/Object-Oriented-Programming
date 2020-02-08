#ifndef INC_00_FIRST_CLASS_RECTANGLE_H
#define INC_00_FIRST_CLASS_RECTANGLE_H


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
