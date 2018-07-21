//complex.h
#ifndef p6_06_H
#define p6_06_H

// member function definitions for p6_06.cpp
#include <iostream>
class Complex {
public:
	Complex( double = 0.0, double = 0.0 ); // default constructor
	void addition( const Complex & );
	void subtraction( const Complex & );
	void printComplex( void );
	void setComplexNumber( double, double );
private:
	double realPart;
	double imaginaryPart;
};
#endif
