#include "Point.hpp"

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

void Point::setX(Fixed nine)
{
    this->x = nine;
}

void Point::setY(Fixed nine)
{
    this->y = nine;
}

Fixed Point::getX() const
{
    return this->x;
}

Fixed Point::getY() const
{
    return this->y;
}

Point::Point(const float val1, const float val2)
{
    this->x = val1;
    this->y = val2;
}

Point::~Point()
{
}
Point::Point(const Point &other)
{
    this->x = other.getX();
    this->y = other.getY();
}
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