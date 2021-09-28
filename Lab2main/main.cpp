

// Sukhikh Matvei B20-523


#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <stdio.h>
#include <strstream>
#include "C:\Users\Vulki\source\repos\StaticLib1\Ellipse.h"

using namespace Prog2;

    int main() {
        double fa, sa, x;
        std::cout << "Enter first axis of Ellipse (Should be more then second)" << std::endl; // Big axis
        if (!getNum(fa))
            return -1;
        if (fa > 0) { // Check that first axis > 0
            std::cout << "Enter second axis of Ellipse" << std::endl; // Small axis
            if (!getNum(sa))
                return -1;
            if (fa < sa) // Check that first axis bigger than second axis
                return -1;
            ellipse a1(1, 1);
            a1.setFAxis(fa);
            a1.setSAxis(sa);
            std::cout << "Length = " << a1.focal_length() << std::endl;
            std::cout << "Eccentricity = " << a1.eccentricity() << std::endl;
            std::cout << "Length = " << a1.length() << std::endl;
            std::cout << "Square = " << a1.square() << std::endl;
            std::cout << "Perifocus = " << a1.perifocus() << std::endl;
            std::cout << "Apofocus = " << a1.apofocus() << std::endl;
            std::cout << "Enter X lower then first axis" << std::endl;
            if (!getNum(x))
                return -1;
            if (x <= fa)
                std::cout << "Y = " << a1.FindY(x) << std::endl;
            else return -1;

        }
        else {
            std::cout << "Bad first axis" << std::endl;
            return -1;
        }
    }

