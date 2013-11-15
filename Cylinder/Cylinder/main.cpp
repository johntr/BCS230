//
//  main.cpp
//  Cylinder
//
//  Created by John Redlich on 11/14/13.
//  Copyright (c) 2013 John Redlich. All rights reserved.
//

#include <iostream>
using namespace std;

class Circle {
    
protected:
    double radius;
public:
    Circle(double);
    double calcArea();
};

class Cylinder: public Circle {

protected:
    double height;
public:
    Cylinder(double r,double h): Circle(r),height(h) {};
    double calcVolume();
};

Circle::Circle(double r){
    radius = r;
}

double Circle::calcArea(){
    
    return 3.14 * (radius*radius);
}

double Cylinder::calcVolume(){
    return Circle::calcArea() * height;
}

int main()
{
    Circle C(2.3);
    Cylinder Cyl(3.4, 5.6);
    cout << "The area is " << C.calcArea() << endl;
    cout << "The Volume is " << Cyl.calcVolume() <<endl;
    return 0;
}

