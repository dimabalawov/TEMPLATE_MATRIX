#pragma once
using namespace std;
#include <iostream>
class Point
{
    int x;
    int y;
public:
    Point();
    Point(int a, int b);
    Point& operator=(Point a);
    void Input();
    void RandInput();
    void Print();
    int getX() const;
    int getY() const;
    Point operator+(int a);
    Point operator+(Point a);
    Point operator-(Point a);
    Point operator-(int a);
    Point operator*(int a);
    Point operator/(int a);
    bool operator>(Point a);
    bool operator<(Point a);
    Point& operator=(int a);
};
ostream& operator<<(ostream& out, const Point a);

