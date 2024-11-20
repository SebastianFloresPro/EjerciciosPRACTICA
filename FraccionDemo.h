#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>
class Fraccion
{
    public:

        int gcd(int a , int b)
        {
            if(b==0)
            {
                return a;
            }
            else
                return gcd(b,a%b);
        }
        int n , d;
        Fraccion(int n , int d=1);
            
        int num() const{return n;} 
        int den() const {return d;} 
        Fraccion& operator*=(const Fraccion& rhs);
        Fraccion operator*(const Fraccion& o);
        friend Fraccion operator*(const int& o,Fraccion& l);
        bool operator==(const Fraccion& o);
        bool operator!=(const Fraccion& lhs);
        friend std::ostream& operator<<(std::ostream& os , const Fraccion& f);



};

#endif