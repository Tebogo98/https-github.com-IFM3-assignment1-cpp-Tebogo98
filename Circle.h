#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>

using namespace std;

class Circle : public Shape{
    public:
        Circle();
        Circle(int r);

        void print();
        double area();

    private:
        int radius;
        static const double PI = 3.1417;
};

#endif // CIRCLE_H
