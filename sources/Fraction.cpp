#include <iostream>
#include <cmath>

#include "Fraction.hpp"

namespace ariel
{
    Fraction::Fraction(int a, int b) : numerator(a), denominator(b) {}
    Fraction::Fraction(float value){}

    Fraction Fraction::operator+(const Fraction &other) const {}
    Fraction Fraction::operator-(const Fraction &other) const {}
    Fraction Fraction::operator*(const Fraction &other) const {}
    Fraction Fraction::operator/(const Fraction &other) const {}

    Fraction Fraction::operator+=(const Fraction &other) {}
    Fraction Fraction::operator-=(const Fraction &other) {}
    Fraction Fraction::operator*=(const Fraction &other) {}
    Fraction Fraction::operator/=(const Fraction &other) {}

    bool Fraction::operator==(const Fraction &other) const {}
    bool Fraction::operator!=(const Fraction &other) const {}
    bool Fraction::operator<(const Fraction &other) const {}
    bool Fraction::operator<=(const Fraction &other) const {}
    bool Fraction::operator>(const Fraction &other) const {}
    bool Fraction::operator>=(const Fraction &other) const {}

    Fraction Fraction::operator+() const {}
    Fraction Fraction::operator-() const {}

    Fraction Fraction::operator+(int n) const {}
    Fraction Fraction::operator-(int n) const {}
    Fraction Fraction::operator*(int n) const {}
    Fraction Fraction::operator/(int n) const {}
    Fraction Fraction::operator+=(int n) {}
    Fraction Fraction::operator-=(int n) {}
    Fraction Fraction::operator*=(int n) {}
    Fraction Fraction::operator/=(int n) {}

    Fraction operator+(float leftSide, const Fraction &rightSide){}
    Fraction operator-(float leftSide, const Fraction &rightSide){}
    Fraction operator*(float leftSide, const Fraction &rightSide){}
    Fraction operator/(float leftSide, const Fraction &rightSide){}
    Fraction Fraction::operator+(float rightSide) const{}
    Fraction Fraction::operator-(float rightSide) const{}
    Fraction Fraction::operator*(float rightSide) const{}
    Fraction Fraction::operator/(float rightSide) const{}
    Fraction Fraction::operator+=(float rightSide){}
    Fraction Fraction::operator-=(float rightSide){}
    Fraction Fraction::operator*=(float rightSide){}
    Fraction Fraction::operator/=(float rightSide){}

    Fraction Fraction::operator++(int) {}
    Fraction &Fraction::operator--() {}
    Fraction Fraction::operator--(int) {}
    Fraction &Fraction::operator++() {}

    Fraction Fraction::reciprocal() const {}
    double Fraction::toDouble() const {}
    float Fraction::toFloat() const {}
    std::ostream &operator<<(std::ostream &out, const Fraction &f) {}

    int Fraction::floor() const {}
    int Fraction::ceil() const {}
    Fraction Fraction::abs() const {}
    Fraction Fraction::pow(int power) const {}
    Fraction Fraction::sqrt() const {}
}