#ifndef RHOMBUS_H
#define RHOMBUS_H

class Rhombus
{
public:

    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;

    Rhombus();
    Rhombus(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4);

    double getPerimeter() const;
    double getArea() const;
};
#endif RHOMBUS_H
