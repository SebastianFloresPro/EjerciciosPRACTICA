#include <iostream>
using namespace std;

class Vector2D {
    float x, y;

public:
    Vector2D(float x = 0, float y = 0) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& v) {
        return Vector2D(x + v.x, y + v.y);
    }

    void print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector2D v1(3.5, 2.0), v2(1.5, 4.5);
    Vector2D result = v1 + v2;

    cout << "Resultado de la suma: "<<endl;
    result.print();
    return 0;
}