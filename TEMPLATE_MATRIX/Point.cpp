
#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
    x = 0;
    y = 0;
}
    Point::Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void Point::Input()
    {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }
    void Point::RandInput()
    {
        x = rand() % 50;
        y = rand() % 50;
    }
    void Point::Print()
    {
        cout << x << "|" << y;
    }
    int Point::getX() const
    {
        return x;
    }
    int Point::getY() const
    {
        return y;
    }
    Point Point::operator+(int a)
    {
        Point temp;
        temp.x += a;
        temp.y += a;
        return temp;
    }
    Point Point::operator+(Point a)
    {
        Point temp = *this;
        temp.x += a.x;
        temp.y += a.y;
        return temp;
    }
    Point Point::operator-(Point a)
    {
        Point temp;
        temp.x -= a.x;
        temp.y -= a.y;
        return temp;
    }
    Point Point::operator-(int a)
    {
        Point temp;
        temp.x -= a;
        temp.y -= a;
        return temp;
    }
    Point Point::operator*(int a)
    {
        Point temp;
        temp.x *= a;
        temp.y *= a;
        return temp;
    }
    Point Point::operator/(int a)
    {
        Point temp;
        temp.x /= a;
        temp.y /= a;
        return temp;
    }
    bool Point::operator>(Point a)
    {
        int temp1 = x + y;
        int temp2 = a.x + a.y;
        if (temp1 > temp2)
            return 1;
        return 0;
    }
    bool Point::operator<(Point a)
    {
        int temp1 = x + y;
        int temp2 = a.x + a.y;
        if (temp1 < temp2)
            return 1;
        return 0;
    }
    Point& Point::operator=(int a)
    {
        x = a;
        y = a;
        return *this;
    }
    Point& Point::operator=(Point a)
    {
        x = a.x;
        y = a.x;
        return *this;
    }
ostream& operator<<(ostream& out, const Point a)
{
    out << a.getX() << "|" << a.getY();
    return out;
}           