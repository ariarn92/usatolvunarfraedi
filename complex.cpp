//  complex.cpp
//  Homework 02
//  Author: Ari Arnaldsson

#include "complex.h"
#include <math.h>

// Constructors
Complex::Complex() : m_Real(0), m_Imaginary(0) {}

Complex::Complex (double a, double b) : m_Real(a), m_Imaginary(b) {}

// Destructor
Complex::~Complex() {}

// Magnitude Squared of this Complex number
double Complex::magnitude2() const {
    // TODO: Calculate the magnitude squared
    
}

// Addition of complex numbers is defined as:
// (a + bi) + (c + di) = (a + c) + (b + d)i
Complex Complex::operator+(const Complex & c) const {
    //TODO: Addition of complex numbers
    Complex result;

	result.real = a.real + b.real;
	result.imag = a.imag + b.imag;

	return result;
}

// Subtraction of complex numbers is defined as:
// (a + bi) - (c + di) = (a - c) + (b - d)i
Complex Complex::operator-(const Complex & c) const {
    //TODO: Subtraction of complex Numbers
    ComplexNumber result;

	result.real = a.real - b.real;
	result.imag = a.imag - b.imag;

	return result;
}

// Multiplication of complex numbers is defined as:
// (a + bi)(c + di) = (ac - bd) + (bc + ad)i
Complex Complex::operator*(const Complex & c) const {
    //TODO: Multiplication of Complex numbers
    	ComplexNumber result;

	result.real = (a.real * b.real - a.imag * b.imag);
	result.imag = (a.real * b.imag + a.imag * b.real);

	return result;
}

// Division
Complex Complex::operator/(const Complex & c) const {
    //TODO: Division of Complex numbers
    ComplexNumber result;

	result.real = (a.real * b.real + a.imag * b.imag) / (b.real * b.real + b.imag * b.imag);
	result.imag = (a.imag * b.real - a.real * b.imag) / (b.real * b.real + b.imag * b.imag);

	return result;
}

// friend function. Notice the lack of complex scope. Why?
std::ostream & operator << (std::ostream & out, const Complex & c)
{
    std::cout << "(" << c.m_Real << " + " << c.m_Imaginary << "i)";
    return out;
}