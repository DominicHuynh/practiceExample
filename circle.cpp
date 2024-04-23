#include "shape.h"
#include "circle.h"
#include "draw.h"
Circle :: Circle(): radius(0){}
Circle :: Circle(double radius): radius(radius){
     
}
void Circle :: setRadius(double radius){
this->radius=radius;
}
double Circle:: getRadius(){
     return radius;
}
double Circle :: calculationArea(){
     double area= 3.14 * radius * radius;
     return area;
}
void Circle :: draw() const {
     cout<<"Drawing a circle"<<endl;
}
