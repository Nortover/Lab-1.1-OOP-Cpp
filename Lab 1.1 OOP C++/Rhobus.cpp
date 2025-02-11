#include <cmath>
#include "Rhombus.h"

Rhombus::Rhombus()
    : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0), x4(0), y4(0)
{
}


Rhombus::Rhombus(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4)
{
}


double Rhombus::getPerimeter() const
{

    double sideA = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double sideB = std::sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    double sideC = std::sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double sideD = std::sqrt((x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4));

    return sideA + sideB + sideC + sideD;
}
double Rhombus::getArea() const
{
    double diagonalA = std::sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double diagonalB = std::sqrt((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2));

    return (diagonalA + diagonalB) / 2;
}