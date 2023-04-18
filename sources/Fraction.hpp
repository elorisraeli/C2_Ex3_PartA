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
        bool operator!=(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;
        bool operator>(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;
        
        friend bool operator==(const Fraction &other, float rightSide);
        friend bool operator!=(const Fraction &other, float rightSide);
        friend bool operator<(const Fraction &other, float rightSide);
        friend bool operator<=(const Fraction &other, float rightSide);
        friend bool operator>(const Fraction &other, float rightSide);
        friend bool operator>=(const Fraction &other, float rightSide);

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

        Fraction operator-() const;

        int floor() const;
        int ceil() const;
        Fraction abs() const;
        Fraction pow(int power) const;
        Fraction sqrt() const;
        Fraction reciprocal() const;
        double toDouble() const;
        float toFloat() const;
        friend std::ostream &operator<<(std::ostream &out, const Fraction &f);
        friend std::istream &operator>>(std::istream& istream, Fraction& f);

    };
}

#endif // FRACTION_HPP