#include "shape.h"
#include "rectangle.h"
#include "draw.h"
Rectangle :: Rectangle(): length(0),breadth(0){}
Rectangle :: Rectangle(double length, double breadth): length(length),breadth(breadth){
     
}
void Rectangle :: setLength(double length){
this->length=length;

}
void Rectangle :: setBreadth(double breadth){
    this->breadth=breadth;
}
double Rectangle:: getLength(){
     return length;
}
double Rectangle:: getBreadth(){
    return breadth;
}
double Rectangle :: calculationArea(){
     double area= length*breadth;
     return area;
}
void Rectangle :: draw(){
    cout<<"Drawing a rectangle"<<endl;
}

