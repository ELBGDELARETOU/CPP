#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    const Point a(1.0, 4.0);
    const Point b(1.0, 1.0);
    const Point c(4.0, 1.0);
    const Point point(3.0, 3.0);
    bsp(a, b, c, point);
}