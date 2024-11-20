#ifndef S2_H
#define S2_H

class Vector2D
{
    friend Vector2D operator+(const Vector2D& a,const Vector2D&b);
    private:
    
    double x , y;
    
    public:

    Vector2D(double x , double y);
    ~Vector2D();
    void print() const;

};

#endif