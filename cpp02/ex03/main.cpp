#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a;
    Point b;
    Point c;
    Point point;

    point.setX(9);
    point.setY(1);
    a.setY(8);
    a.setX(4);
    b.setY(9);
    b.setX(4);
    c.setY(9);
    c.setX(8);
    
    bool bsp(Point const a, Point const b, Point const c, Point const point);
}