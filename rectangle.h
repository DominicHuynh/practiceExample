#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
#include "draw.h"
#include<iostream>
using namespace std;
class Rectangle : public Shape,private Draw{

protected:
 
 double length;
 double breadth;



    public:

 Rectangle();
 Rectangle(double length, double breadth);
 void setLength(double length);
 void setBreadth(double breadth);
 double getLength();
 double getBreadth();
 double calculationArea();
 void draw();
 

};



#endif