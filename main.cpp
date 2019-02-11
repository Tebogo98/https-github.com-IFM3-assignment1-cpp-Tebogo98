//////////////////////////////////////////////////
//////////////////////////////////////////////////
/// Original solution created by Mr B.R. Greaves
/// Computer Science 1, ACSSE, UJ
//////////////////////////////////////////////////
//////////////////////////////////////////////////

#include <iostream>

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main(){
    Rectangle myRectangle(10, 5);
    cout << "myRectangle's area is: " << myRectangle.area() << endl << endl;

    Circle myCircle(10);
    cout << "myCircle's area is: " << myCircle.area() << endl << endl;

    return 0;
}
