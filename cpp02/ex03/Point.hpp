#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point
{
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point &other);
    ~Point();
    Fixed getX() const;
    Fixed getY() const;
    Point &operator=(const Point &other);
};

float calculateArea(const Point &a, const Point &b, const Point &c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif