#ifndef SHAPE_H
#define SHAPE_H
#include "draw.h"
#include<iostream>
using namespace std;
class Shape: public Draw{
    protected:
    double area;
    
 public:
 
virtual double calculationArea();
virtual void draw();
};



#endif