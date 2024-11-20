#include <iostream>
#include "FraccionDemo.h"
using namespace std;

Fraccion::Fraccion(int n , int d ):n(n/gcd(n,d)),d(d/gcd(n,d)){} 

Fraccion& Fraccion::operator*=(const Fraccion& rhs )
{
    int new_n=n*rhs.n/gcd(n*rhs.n,d*rhs.d);
    d=d*rhs.d/gcd(n*rhs.n,d*rhs.d);
    n=new_n;
    return *this;
}
Fraccion Fraccion::operator*(const Fraccion& o)
{        
    int newn=n*o.n;
    int newd=d*o.d; 
    int result=gcd(newn,newd);
    return Fraccion(newn/result,newd/result);
}

bool Fraccion::operator==(const Fraccion&o)
{
    return((n==o.n)&&(d==o.d));
}

bool Fraccion::operator!=(const Fraccion&d)
{
    return !(*this==d);
}

std::ostream& operator<<(std::ostream& os , const Fraccion&f)
{
    return os<<f.n<<" / "<<f.d<<endl;
}
Fraccion operator*(const int &i, Fraccion& l)
{
    int newn = l.n * i;
    int newd = l.d;
    int result = l.gcd(newn, newd);
    return Fraccion(newn / result, newd / result);
}