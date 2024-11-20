#include <iostream>
#include "S2.h"
using namespace std;

Vector2D::Vector2D(double x,double y):x(x),y(y)
{

}
Vector2D::~Vector2D()
{
    cout<<"Vector Destruido"<<endl;
}
Vector2D operator+(const Vector2D& a, const Vector2D& b) {
    
    return Vector2D(a.x + b.x, a.y + b.y);
}

void Vector2D::print()const 
{
    cout<<"["<<x<<" "<<y<<"]"<<endl;
}