#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include "draw.h"
#include<iostream>
using namespace std;
class Circle : public Shape,private Draw{

protected:
 
 double radius;



    public:

 Circle();
 Circle(double radius);
 void setRadius(double radius);
 double getRadius();
 double calculationArea();
 void draw() const ;
 

};



#endif