#include "Rectangle.h"

Rectangle::Rectangle(int h, int w){
    height = h;
    width = w;
}
double Rectangle::area(){
    return width * height;
}
