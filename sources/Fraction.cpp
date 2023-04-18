#include <iostream>
#include <cmath>

#include "Fraction.hpp"

namespace ariel
{
    Fraction::Fraction(int a, int b) : numerator(a), denominator(b) {}
    Fraction::Fraction(float value) {}

    Fraction Fraction::operator+(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/(const Fraction &other) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator+=(const Fraction &other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-=(const Fraction &other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*=(const Fraction &other)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/=(const Fraction &other)
    {
        return Fraction(1, 1);
    }

    bool Fraction::operator==(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator!=(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator<(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator<=(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator>(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator>=(const Fraction &other) const
    {
        return true;
    }

    bool operator==(const Fraction &other, float leftSide)
    {
        return true;
    }
    bool operator!=(const Fraction &other, float leftSide)
    {
        return true;
    }
    bool operator<(const Fraction &other, float leftSide)
    {
        return true;
    }
    bool operator<=(const Fraction &other, float leftSide)
    {
        return true;
    }
    bool operator>(const Fraction &other, float leftSide)
    {
        return true;
    }
    bool operator>=(const Fraction &other, float leftSide)
    {
        return true;
    }

    Fraction operator+(float leftSide, const Fraction &rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction operator-(float leftSide, const Fraction &rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction operator*(float leftSide, const Fraction &rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction operator/(float leftSide, const Fraction &rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator+(float rightSide) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-(float rightSide) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*(float rightSide) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/(float rightSide) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator+=(float rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator-=(float rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator*=(float rightSide)
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::operator/=(float rightSide)
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator++(int)
    {
        return Fraction(1, 1);
    }
    Fraction &Fraction::operator--()
    {
        return *this;
    }
    Fraction Fraction::operator--(int)
    {
        return Fraction(1, 1);
    }
    Fraction &Fraction::operator++()
    {
        return *this;
    }

    Fraction Fraction::reciprocal() const
    {
        return Fraction(1, 1);
    }
    double Fraction::toDouble() const
    {
        return 1.0;
    }
    float Fraction::toFloat() const
    {
        return 1.0f;
    }
    std::ostream &operator<<(std::ostream &out, const Fraction &f)
    {
        out << "";
        return out;
    }

    int Fraction::floor() const
    {
        return 1;
    }
    int Fraction::ceil() const
    {
        return 1;
    }
    Fraction Fraction::pow(int power) const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::abs() const
    {
        return Fraction(1, 1);
    }
    Fraction Fraction::sqrt() const
    {
        return Fraction(1, 1);
    }

    Fraction Fraction::operator-() const
    {
        return Fraction(1, 1);
    }

}