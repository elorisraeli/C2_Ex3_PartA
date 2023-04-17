#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cmath>

#include "doctest.h"
#include "sources/Fraction.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Fraction addition") {
    Fraction a(2, 3);
    Fraction b(4, 5);
    Fraction c = a + b;
    CHECK(c == Fraction(22, 15));
}

TEST_CASE("Fraction subtraction") {
    Fraction a(5, 6);
    Fraction b(2, 3);
    Fraction c = a - b;
    CHECK(c == Fraction(1, 6));
}

TEST_CASE("Fraction multiplication") {
    Fraction a(7, 8);
    Fraction b(3, 4);
    Fraction c = a * b;
    CHECK(c == Fraction(21, 32));
}

TEST_CASE("Fraction division") {
    Fraction a(9, 10);
    Fraction b(3, 5);
    Fraction c = a / b;
    CHECK(c == Fraction(3, 2));
}

TEST_CASE("Adding a fraction and an integer")
{
    Fraction a(3, 7);
    Fraction b = a + 4;
    CHECK(b == Fraction(30, 7));
}

TEST_CASE("Subtracting a fraction and an integer")
{
    Fraction a(9, 10);
    Fraction b = a - 1;
    CHECK(b == Fraction(-1, 10));
}

TEST_CASE("Multiplying by a number")
{
    Fraction a(3, 4);
    Fraction b = a * (-2);
    CHECK(b == Fraction(-3, 2));
}

TEST_CASE("Dividing by a number")
{
    Fraction a(1, 4);
    Fraction b = a / -2;
    CHECK(b == Fraction(-1, 8));
}

TEST_CASE("Fraction comparison")
{
    Fraction a(1, 2);
    Fraction b(2, 3);
    Fraction c(3, 4);

    CHECK(a < b);
    CHECK(b > a);
    CHECK(a <= b);
    CHECK(b >= a);
    CHECK(a == a);
    CHECK(a != b);
    CHECK(c > a && c > b);
    CHECK(c >= a && c >= b);
    CHECK(c != a && c != b);
    CHECK(a <= c && b <= c);
}

TEST_CASE("Fraction increment/decrement")
{
    Fraction a(3, 4);
    Fraction b(1, 2);
    CHECK((a++ == Fraction(3, 4)) && (a == Fraction(7, 4)));
    CHECK((--a == Fraction(3, 4)) && (a == Fraction(3, 4)));
    CHECK((b-- == Fraction(1, 2)) && (b == Fraction(-1, 2)));
    CHECK((++b == Fraction(1, 2)) && (b == Fraction(1, 2)));
}

TEST_CASE("Fraction negative value") {
    Fraction a(5, 6);
    Fraction b(-4, 7);
    CHECK(-a == Fraction(-5, 6));
    CHECK(-b == Fraction(4, 7));
}

TEST_CASE("Fraction reciprocal value") {
    Fraction a(8, 9);
    Fraction b(-5, 6);
    CHECK(a.reciprocal() == Fraction(9, 8));
    CHECK(b.reciprocal() == Fraction(-6, 5));
}

TEST_CASE("Fraction absolute value") {
    Fraction a(-5, 6);
    Fraction b(2, -3);
    CHECK(a.abs() == Fraction(5, 6));
    CHECK(b.abs() == Fraction(2, 3));
}

TEST_CASE("Fraction power value") {
    Fraction a(2, 3);
    Fraction b(-3, 4);
    CHECK(a.pow(2) == Fraction(4, 9));
    CHECK(b.pow(3) == Fraction(-27, 64));
}

TEST_CASE("Fraction square root value") {
    Fraction a(16, 25);
    Fraction b(4, 121);
    CHECK(a.sqrt() == Fraction(4, 5));
    CHECK(b.sqrt() == Fraction(2, 11));
}

TEST_CASE("Fraction floor/ceil values")
{
    Fraction f1(3, 2);  // 1.5
    Fraction f2(9, 4);  // 2.25
    Fraction f3(7, 3);  // 2.(3)
    Fraction f4(10, 3); // 3.(3)

    CHECK(f1.floor() == 1);
    CHECK(f2.floor() == 2);
    CHECK(f3.floor() == 2);
    CHECK(f4.floor() == 3);

    CHECK(f1.ceil() == 2);
    CHECK(f2.ceil() == 3);
    CHECK(f3.ceil() == 3);
    CHECK(f4.ceil() == 4);
}

TEST_CASE("Converting fraction to double")
{
    Fraction a(3, 4);
    double b = a.toDouble();
    CHECK(b == doctest::Approx(0.75));
}

TEST_CASE("Fraction to float conversion") {
    Fraction a(7, 9);
    Fraction b(-4, 7);
    float result_a = a.toFloat();
    float result_b = b.toFloat();
    CHECK(result_a == doctest::Approx(7.0f / 9.0f));
    CHECK(result_b == doctest::Approx(-4.0f / 7.0f));
}

TEST_CASE("Fraction to output string") {
    Fraction a(7, 8);
    Fraction b(-5, 6);
    Fraction c(1, 1);
    Fraction d(-9, 1);

    stringstream out1;
    out1 << a;
    CHECK(out1.str() == "7/8");

    stringstream out2;
    out2 << b;
    CHECK(out2.str() == "-5/6");

    stringstream out3;
    out3 << c;
    CHECK(out3.str() == "1");

    stringstream out4;
    out4 << d;
    CHECK(out4.str() == "-9");
}



