#include "Fixed.hpp"
#include "Point.hpp"

int main(/* int ac, char **av */)
{
    // if(ac != 9) 
        // std::cout << "please follow this format : aX, aY, bX, bY, cX, cY, pointX, pointY" << std::endl;
    const Point a(1.0, 4.0);
    const Point b(1.0, 1.0);
    const Point c(4.0, 1.0);
    const Point point(1.0, 1.0);
    bsp(a, b, c, point);
}