
// Sukhikh Matvei B20-523

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <stdio.h>
#include <strstream>
#include "Ellipse.h"

namespace Prog2 {

    double ellipse::focal_length() const { // return the focal length
        return sqrt(a * a - b * b);
    }

    double ellipse::eccentricity() const { // return the eccentricity
        return sqrt(1 - (pow(b, 2) / pow(a, 2)));
    }

    double ellipse::length() const { // return the length of ellipse
        return (M_PI * (a + b));
    }

    double ellipse::square() const { // return the square of ellipse
        return (M_PI * (a * b / 4));
    }

    double ellipse::perifocus() const { // return the perifucos (minimum length from point to Focus)
        return a - ellipse::eccentricity();
    }

    double ellipse::apofocus() const { // return the apofocus (maximum length from point to Focus)
        return a + ellipse::eccentricity();
    }

    double ellipse::FindY(double x) const { // Find Y when we know x
        if (x <= a)
            return (sqrt(pow(b, 2) - (pow(x, 2) * pow(b, 2) / pow(a, 2))));
        else return -2;
    }

    ellipse::ellipse(double A, double B) {
        if (A <= 0) {
            throw std::logic_error("Incorrect first semi-axis");
        }
        if (B <= 0) {
            throw std::logic_error("Incorrect second semi-axis");
        }
        if (B > A) {
            throw std::logic_error("Incorrect second semi-axis");
        }
        this->a = A; this->b = B;
    }

    ellipse& ellipse::setFAxis(double A) {
        if (A <= 0) {
            throw std::logic_error("Incorrect first semi-axis");
        }
        if (A < b) {
            throw std::logic_error("Incorrect first axis (lower then second semi-axis)");
        }
        a = A;
        return *this;
    }

    ellipse& ellipse::setSAxis(double B) {
        if (B <= 0) {
            throw std::logic_error("Incorrect second semi-axis");
        }
        if (B > a) {
            throw std::logic_error("Incorrect second semi-axis");
        }
        b = B;
        return *this;
    }

}