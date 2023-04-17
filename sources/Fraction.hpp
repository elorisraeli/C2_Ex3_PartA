#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

namespace ariel
{
    class Fraction
    {
    private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator);
        explicit Fraction(float value);

        Fraction operator+(const Fraction &other) const;
        Fraction operator-(const Fraction &other) const;
        Fraction operator*(const Fraction &other) const;
        Fraction operator/(const Fraction &other) const;
        Fraction operator+=(const Fraction &other);
        Fraction operator-=(const Fraction &other);
        Fraction operator*=(const Fraction &other);
        Fraction operator/=(const Fraction &other);

        bool operator==(const Fraction &other) const;
        bool operator!=(const Fraction &f) const;
        bool operator<(const Fraction &f) const;
        bool operator<=(const Fraction &f) const;
        bool operator>(const Fraction &f) const;
        bool operator>=(const Fraction &f) const;
        Fraction operator+() const;
        Fraction operator-() const;

        friend Fraction operator+(int leftSide, const Fraction &rightSide);
        friend Fraction operator-(int leftSide, const Fraction &rightSide);
        friend Fraction operator*(int leftSide, const Fraction &rightSide);
        friend Fraction operator/(int leftSide, const Fraction &rightSide);
        Fraction operator+(int n) const;
        Fraction operator-(int n) const;
        Fraction operator*(int n) const;
        Fraction operator/(int n) const;
        Fraction operator+=(int n);
        Fraction operator-=(int n);
        Fraction operator*=(int n);
        Fraction operator/=(int n);

        friend Fraction operator+(float leftSide, const Fraction &rightSide);
        friend Fraction operator-(float leftSide, const Fraction &rightSide);
        friend Fraction operator*(float leftSide, const Fraction &rightSide);
        friend Fraction operator/(float leftSide, const Fraction &rightSide);
        Fraction operator+(float rightSide) const;
        Fraction operator-(float rightSide) const;
        Fraction operator*(float rightSide) const;
        Fraction operator/(float rightSide) const;
        Fraction operator+=(float rightSide);
        Fraction operator-=(float rightSide);
        Fraction operator*=(float rightSide);
        Fraction operator/=(float rightSide);

        Fraction operator++(int);
        Fraction &operator--();
        Fraction operator--(int);
        Fraction &operator++();

        int floor() const;
        int ceil() const;
        Fraction abs() const;
        Fraction pow(int power) const;
        Fraction sqrt() const;
        Fraction reciprocal() const;
        double toDouble() const;
        float toFloat() const;
        friend std::ostream &operator<<(std::ostream &out, const Fraction &f);
    };
}

#endif // FRACTION_HPP