#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Fixed Point::getY() const { return y; }

Fixed Point::getX() const { return x; }

Point::~Point()
{
}

Point::Point(const Point &other) : x(other.x), y(other.y) {};

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    return *this;
}

//------------------------------------------------------------------------//

float calculateArea(const Point &a, const Point &b, const Point &c)
{
    Fixed result =
        a.getX() * (b.getY() - c.getY()) +
        b.getX() * (c.getY() - a.getY()) +
        c.getX() * (a.getY() - b.getY());
    if (result < 0)
        result * -1;
    return (result.toFloat() * 0.5f);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    (void)point;
    float i;
    i = calculateArea(a, b, c);
    std::cout << "i" << std::endl;
    return (true);
}