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
        Fraction operator+(const Fraction &other) const;
        Fraction operator-(const Fraction &other) const;
        Fraction operator*(const Fraction &other) const;
        Fraction operator/(const Fraction &other) const;
        bool operator==(const Fraction &other) const;

        bool operator!=(const Fraction &f) const;
        bool operator<(const Fraction &f) const;
        bool operator<=(const Fraction &f) const;
        bool operator>(const Fraction &f) const;
        bool operator>=(const Fraction &f) const;
        Fraction operator+() const;
        Fraction operator-() const;
        Fraction reciprocal() const;
        double toDouble() const;
        float toFloat() const;
        friend std::ostream &operator<<(std::ostream &out, const Fraction &f);

        Fraction operator+(int n) const;
        Fraction operator-(int n) const;
        Fraction operator*(int n) const;
        Fraction operator/(int n) const;
        Fraction operator+=(const Fraction &other);
        Fraction operator-=(const Fraction &other);
        Fraction operator*=(const Fraction &other);
        Fraction operator/=(const Fraction &other);
        Fraction operator+=(int n);
        Fraction operator-=(int n);
        Fraction operator*=(int n);
        Fraction operator/=(int n);

        Fraction operator++(int);
        Fraction &operator--();
        Fraction operator--(int);
        Fraction &operator++();
        int floor() const;
        int ceil() const;
        Fraction abs() const;
        Fraction pow(int power) const;
        Fraction sqrt() const;
    };
}

#endif // FRACTION_HPP