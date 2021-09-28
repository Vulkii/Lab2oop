#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <stdio.h>
#include <strstream>
#include "Ellipse.h"


double ellipse::focal_length() const { // возврат фокального расстояния
    return sqrt(a * a - b * b);
}

double ellipse::eccentricity() const { // возврат эксцентриситета
    return sqrt(1 - (pow(b, 2) / pow(a, 2)));
}

double ellipse::length() const { // возврат длины
    return (M_PI * (a + b));
}

double ellipse::square() const { // возврат длины
    return (M_PI * (a * b / 4));
}

double ellipse::FindY(double x) const {
        return (sqrt(pow(b, 2) - (pow(x, 2) * pow(b, 2) / pow(a, 2))));
}