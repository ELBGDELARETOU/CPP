#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    const Point a(1.0, 4.0);
    const Point b(1.0, 1.0);
    const Point c(4.0, 1.0);
    const Point point(1.1, 3);
    bsp(a, b, c, point);
}