#pragma once

// Sukhikh Matvei B20-523

#ifndef ellipse_h
#define ellipse_h

namespace Prog2 {

    template <typename Type>
    int get(Type& x, int min, const char* message)
    {
        while (true)
        {
            std::cout << message << std::endl;
            std::cin >> x;
            if (std::cin.eof() || std::cin.bad())
                return -1;
            else if (std::cin.fail() || x <= min)
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Input error. Try again\n";
            }
            else
                return 0;
        }
    }

    template <class T>
    bool getNum(T& a)
    {
        while (!(std::cin >> a))
        {
            if (std::cin.eof())
                return false;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        return true;

    }

    class ellipse {
    private:
        double a, b; // a, b - semi-axis of the Ellipse
    public:

        // constructors
        ellipse() :a(0), b(0) {};
        ellipse(double axis1, double axis2);

        //setters
        ellipse& setFAxis(double A);
        ellipse& setSAxis(double B);

        //getters
        double getFAxis() { return a; };
        double getSAxis() { return b; };

        // methods
        double focal_length() const;
        double eccentricity() const;
        double length() const;
        double square() const;
        double FindY(double x) const;
        double perifocus() const;
        double apofocus() const;
        ~ellipse() {
            std::cout << "Destructor called for Ellipse " << std::endl;
        }
    };

#endif 
}
#include "Ellipse.cpp"