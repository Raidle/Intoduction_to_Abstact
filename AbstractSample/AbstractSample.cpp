#include <iostream>
#include "Rectangle.h";
#include "Triangle.h"
using namespace std;

int main()
{
    Rectangle r;
    r.setSideA(20);
    r.setSideB(10);

    Triangle b;
    b.setSideA(20);
    b.setSideB(10);

    cout << "The Rectangle Area is " << r.CaclArea() << endl;
    cout << "The Triangle Area is " << b.CaclArea() << endl;
}