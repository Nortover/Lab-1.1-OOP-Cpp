#include <iostream>
#include "Rhombus.h"

int main()
{

    double x1, y1, x2, y2, x3, y3, x4, y4;

    std::cout << "Type rhombus coordinates (x1, y1, x2, y2, x3, y3, x4, y4): ";
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    Rhombus rhombus(x1, y1, x2, y2, x3, y3, x4, y4);

    double perimeter = rhombus.getPerimeter();
    std::cout << "\nPerimeter: " << perimeter << std::endl;


    double area = rhombus.getArea();
    std::cout << "Area: " << area << std::endl;

    return 0;
}
