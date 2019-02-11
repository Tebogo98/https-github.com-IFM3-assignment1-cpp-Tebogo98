#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>

using namespace std;

class Rectangle : public Shape{
    public:
        Rectangle();
        Rectangle(int h, int w);

        double area();

    protected:
        int width;
        int height;
};

#endif // RECTANGLE_H
