#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <ostream>
class Complejo
{
    friend  Complejo operator+(Complejo& a,Complejo& b);
    friend  Complejo operator-(Complejo&a,Complejo&b);
    friend bool operator==(Complejo& a,Complejo& b);
    friend bool operator!=(Complejo& a,Complejo& b);
    friend std::ostream& operator<<(std::ostream& os,Complejo& a);
    friend std::istream& operator>>(std::istream& is,Complejo&a);

    private:

    double i , r;
    
    public:

    Complejo(double real , double imaginario);
    ~Complejo();
    Complejo& operator=(const Complejo&b);
    virtual void print()const;
    
};


#endif 