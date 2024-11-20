#include <iostream>
#include "Complejo.h"
#include "ostream"
using namespace std;

Complejo::Complejo(double real , double imaginario):i(imaginario),r(real){}
Complejo::~Complejo()
{
    cout<<"Complejo eliminado"<<endl;

}
Complejo operator+(Complejo&a,Complejo&b)
{
    return Complejo(a.r+b.r,a.i+b.i);
}
Complejo operator-(Complejo&a,Complejo&b)
{
    return Complejo(a.r-b.r,a.i-b.i);
}
bool operator==(Complejo&a,Complejo&b)
{
    return ((a.r==b.r)&&(b.i==b.i));
}
bool operator!=(Complejo&a,Complejo&b)
{
    return !(a==b);
}
Complejo& Complejo::operator=(const Complejo&b)
{
    if(this!=&b)
    {
        r=b.r;
        i=b.i;

    }
    return *this;

    
}
ostream& operator<<(ostream& os , Complejo&a)
{
    return os<<(a.i)<<" "<<(a.r)<<"i"<<endl;
}

istream& operator>>(istream& is , Complejo& a)
{
    is >> a.i >>a.r;
     return is;
}
void Complejo::print()const
{
    if(i<=0 || r<=0)
        cout<<r<<" + "<<i<<"i"<<endl;
    else
        cout<<r<<" - "<<i<<"i"<<endl;   
}
//(a.r==b.r)&&(b.i==b.i)