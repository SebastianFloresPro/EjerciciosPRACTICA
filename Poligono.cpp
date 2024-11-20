
#include <iostream>
using namespace std;

class Poligono
{
    protected:
        int ancho{1} , alto{1};
    public:
        Poligono(int x , int y):ancho(x),alto(y){}
        virtual int area(void)=0;
        
        void print()
        {
            cout<<this->area()<<endl;

        }

        
};

class Triangulo: public Poligono
{
    public:
    Triangulo(int x , int y):Poligono(x,y){}
    int area() override
    {
        return (ancho*alto)/2;
    }
};

class Rectangulo: public Poligono
{
    public:
    Rectangulo(int x , int y):Poligono(x,y){}
    int area() override
    {
        return (ancho*alto);
    }
};
void printArea(Poligono**arr,int tam)
{
    for(int i{0};i<tam;i++)
    {
        arr[i]->print();
    }
}
int main()
{
    Poligono **arr=new Poligono*[2];
    arr[0]=new Rectangulo(4,5);
    arr[1]=new Triangulo(4,5);
    printArea(arr,2);
    delete arr;

}