#ifndef P6_07_H
#define P6_07_H
//member function definitions for p6_07.cpp
#include <iostream>
class Rational {
public:
	Rational( int = 0, int = 1 ); // default constructor
	Rational addition( const Rational & );
	Rational subtraction( const Rational & );
	Rational multiplication( const Rational & );
	Rational division( Rational & );
	void printRational( void );
	void printRationalAsDouble( void );
private:
	int numerator;
	int denominator;
	void reduction( void );
// utility function
};
#endif
