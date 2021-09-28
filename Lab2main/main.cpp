

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
		int choice = -1;
		fa = sa = 1;
		ellipse a1(1, 1);
		do
		{
			if (get(choice, -1, "\n0.Exit\n1.Change First Semi-Axis\n2.Change Second Semi-axis\n"
				"3.Show length\n4.Show square\n5.Show perifocus"
				"\n6.Show apofocus\n7.Show eccentricity\n8.Get Y\n") < 0)
			{
			}
			switch (choice)
			{
			case 1:
				std::cout << "Enter first semi-axis of Ellipse (Should be more then second)" << std::endl; // Big semi-axis
				if (!getNum(fa))
					return -1;
				a1.setFAxis(fa);
				break;
			case 2:
				std::cout << "Enter second semi-axis of Ellipse" << std::endl; // Small semi-axis
				if (!getNum(sa))
					return -1;
				a1.setSAxis(sa);
				break;
			case 3:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				else {
					std::cout << "Length = " << a1.length() << std::endl;
				}
				break;
			case 4:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				else {
					std::cout << "Square = " << a1.square() << std::endl;
				}
				break;
			case 5:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				else {
					std::cout << "Perifocus = " << a1.perifocus() << std::endl;
				}
				break;
			case 6:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				else {
					std::cout << "Apoifocus = " << a1.apofocus() << std::endl;
				}
				break;
			case 7:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				else {
					std::cout << "Eccentricity = " << a1.eccentricity() << std::endl;
				}
				break;
			case 8:
				if (fa < sa) // Check that first semi-axis bigger than second semi-axis
					return -1;
				std::cout << "Enter the x, that is lower than first-axis (" << fa <<")"<< std::endl;
				if (!getNum(x))
					return -1;
				if (x <= fa)
					std::cout << "Y = " << a1.FindY(x) << std::endl;
				else return -1;
				break;
			}
		} while (choice != 0);
    }