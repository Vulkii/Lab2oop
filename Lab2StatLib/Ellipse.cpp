
// Сухих Матвей Б20-523.

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <stdio.h>
#include <strstream>
#include "Ellipse.h"


double ellipse::focal_length() const { // возврат фокального расстояния
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return sqrt(a * a - b * b);
}

double ellipse::eccentricity() const { // возврат эксцентриситета
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return sqrt(1 - (pow(b, 2) / pow(a, 2)));
}

double ellipse::length() const { // возврат длины
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return (M_PI * (a + b));
}

double ellipse::square() const { // возврат площади
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return (M_PI * (a * b / 4));
}

double ellipse::perifocus() const { // возврат перифокуса (минимальное от фокуса до точки)
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return a - ellipse::eccentricity();
}

double ellipse::apofocus() const { // возврат перифокуса (максимальное от фокуса до точки)
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else
        return a + ellipse::eccentricity();
}

double ellipse::FindY(double x) const {
    if ((a <= 0 || b <= 0)) {
        return -1;
    }
    else if (x < a)
        return (sqrt(pow(b, 2) - (pow(x, 2) * pow(b, 2) / pow(a, 2))));
    else return -2;
}