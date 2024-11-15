#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Fixed Point::getY() const { return y; }

Fixed Point::getX() const { return x; }

Point::~Point() {}

Point::Point(const Point &other) : x(other.x), y(other.y) {};

//------------------------------------------------------------------------//

float calculateArea(const Point &a, const Point &b, const Point &c)
{
    Fixed result =
        a.getX() * (b.getY() - c.getY()) +
        b.getX() * (c.getY() - a.getY()) +
        c.getX() * (a.getY() - b.getY());
    if (result < 0)
        result = result * -1;
    return (result.toFloat() * 0.5f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float triangle = calculateArea(a, b, c);
    float tmp = calculateArea(a, b, point);
    float tmp1 = calculateArea(a, c, point);
    float tmp2 = calculateArea(c, b, point);

    if ((tmp + tmp1 + tmp2) > triangle)
        return (std::cout << "false" << std::endl, true);
    return (std::cout << "true" << std::endl, false);
}