#pragma once

// Сухих Матвей Б20-523.

#ifndef ellipse_h
#define ellipse_h



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
    double a, b; // a, b - полуоси эллипса.
public:
    ellipse() :a(0), b(0) {}; 
    ellipse(double poluos1, double poluos2) :a(poluos1), b(poluos2) {}; 

    double focal_length() const;
    double eccentricity() const;
    double length() const;
    double square() const;
    double FindY(double x) const;
    double perifocus() const;
    double apofocus() const;
    ~ellipse(){
            std::cout << "Destructor called for Ellipse " << std::endl;
    }
};

#endif 

#include "Ellipse.cpp"