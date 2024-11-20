#include <iostream>

using namespace std;

// clas Polygon
class Polygon {
    protected:
        int width, height;
    public:
        Polygon(int a, int b) : width(a), height(b) {}
        virtual int area(void) = 0;
        void printarea() {
            cout << this->area() << '\n';
        }
};

// (b)fabricio
class Triangle : public Polygon {
    public:
        Triangle(int a, int b) : Polygon(a, b) {}
        int area(void) override {
            return width * height / 2;
        }
};

class Rectangle : public Polygon {
    public:
        Rectangle(int a, int b) : Polygon(a, b) {}
        int area(void) override {
            return width * height;
        }
};

// (d) 
void printArea(Polygon **arr, int tam) {
    for(int i = 0; i < tam; i++) {
        arr[i]->printarea();
    }
}


int main() {
    Polygon **arr = new Polygon*[2];
    arr[0] = new Rectangle(4,5);
    arr[1] = new Triangle(4,5);

    printArea(arr, 2);
}