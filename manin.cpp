#include <iostream>
#include "FraccionDemo.h"
using namespace std;

int main()
{
    

    Fraccion f1(3, 8), f2(1, 2), f3(10, 2);
    std::cout << (f1 == f2) << '\n';
    std::cout << (f1 != f2) << '\n';
    std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'
                << f2 << " * " << f3 << " = " << f2 * f3 << '\n'
                <<  2 << " * " << f1 << " = " <<  2 * f1 << '\n';

}