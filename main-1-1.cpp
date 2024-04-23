#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>
using namespace std;
int main(){
    
    
     Shape* shape[2];
     shape [0]= new Circle(5.0);
     shape [1]=new Rectangle(5.0,6.0);
     for (int i=0;i<2;i++){
        cout<<"The area of the shape: "<< shape[i]->calculationArea()<<endl;
     }
    return 0;
}