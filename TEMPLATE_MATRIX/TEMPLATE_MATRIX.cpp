

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    srand(time(0));
    Matrix < double > test(5, 5);
    Matrix<double> test2(5,5);
    test.Input();
    test2.Input();
    test.Print();
    test2.Print();
    Matrix<double> test3 = test2 / test;
    test3.Print();
}

