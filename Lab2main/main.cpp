#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <stdio.h>
#include <strstream>
#include "C:\Users\Vulki\source\repos\StaticLib1\Ellipse.h"

int main() {
    double a, b, x;
    std::cout << "Enter first axis of Ellipse (Should be more then second)" << std::endl;
    if (!getNum(a))
        return -1;
    if (a >= 0) {
        std::cout << "Enter second axis of Ellipse" << std::endl;
        if (!getNum(b))
            return -1;
        if (a < b)
            return -1;
        ellipse a1(a, b);
        std::cout << "Length = " << a1.focal_length() << std::endl;
        std::cout << "Eccentricity = " << a1.eccentricity() << std::endl;
        std::cout << "Length = " << a1.length() << std::endl;
        std::cout << "Square = " << a1.square() << std::endl;
        std::cout << "Enter X lower then a" << std::endl;
        if (!getNum(x))
            return -1;
        if (x <= a)
            std::cout << "Y = " << a1.FindY(x) << std::endl;
        else return -1;

    }
    else {
        std::cout << "Bad first axis" << std::endl;
        return -1;
    }
}
