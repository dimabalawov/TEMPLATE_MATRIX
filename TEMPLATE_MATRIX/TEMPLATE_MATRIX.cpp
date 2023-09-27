

#include <iostream>
#include "Matrix.h"
#include "Point.h"
using namespace std;




int main()
{
    srand(time(0));
    Matrix < Point > test(5, 5);
    Matrix<Point> test2(5,5);
    test.Input();
    test2.Input();
    test.Print();
    test2.Print();
    Matrix<Point> test3 = (test + test2);
    test3.Print();

}

