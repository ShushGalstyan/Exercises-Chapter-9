//( Rational Class) Create a class called Rational for performing arithmetic with fractions. Write a program to test your class. Use integer variables to represent the private data of the class—the numerator and the denomonator . Provide a constructor that enables an object of this class to be initialized when it’s declared. The constructor should contain default values in case no initializers are provided and should store the fraction in reduced form. For example, the fraction
//	2
//	-
//	4
//would be stored in the object as 1 in the numerator and 2 in the denominator . Provide public member functions that perform each of the following tasks:
//a) Adding two Rational numbers. The result should be stored in reduced form.
//b) Subtracting two Rational numbers. The result should be stored in reduced form.
//c) Multiplying two Rational numbers. The result should be stored in reduced form.
//d) Dividing two Rational numbers. The result should be stored in reduced form.
//e) Printing Rational numbers in the form a/b , where a is the numerator and b is the denominator.
//f) Printing Rational numbers in floating-point format.
#include <iostream>
using namespace std;
#include "Rational.h"
Rational::Rational( int n, int d )
{
	numerator = n;
	denominator = d;
}
Rational Rational::addition( const Rational &a )
{
	Rational t;
	t.numerator = a.numerator * denominator;
	t.numerator += a.denominator * numerator;
	t.denominator = a.denominator * denominator;
	t.reduction();
	return t;
}
Rational Rational::subtraction( const Rational &s )
{
	Rational t;
	t.numerator = s.denominator * numerator;
	t.numerator -= denominator * s.numerator;
	t.denominator = s.denominator * denominator;
	t.reduction();
	return t;
}
Rational Rational::multiplication( const Rational &m )
{
	Rational t;
	t.numerator = m.numerator * numerator;
	t.denominator = m.denominator * denominator;
	t.reduction();
	return t;
}
Rational Rational::division( Rational &v )
{
	Rational t;
	t.numerator = v.denominator * numerator;
	t.denominator = denominator * v.numerator;
	t.reduction();
	return t;
}
void Rational::printRational( void )
{
	if ( denominator == 0 )
		cout << "\nDIVIDE BY ZERO ERROR!!!" << '\n';
	else if ( numerator == 0 )
		cout << 0;
	else
		cout << numerator << '/' << denominator;
}
void Rational::printRationalAsDouble( void )
	{ cout << static_cast< double >( numerator ) / denominator; }
void Rational::reduction( void )
{
	int largest;
	largest = numerator > denominator ? numerator : denominator;
	int gcd = 0;
	// greatest common divisor
	for ( int loop = 2; loop <= largest; ++loop )
		if ( numerator % loop == 0 && denominator % loop == 0 )
			gcd = loop;
	if (gcd != 0) {
		numerator /= gcd;
		denominator /= gcd;
	}
}
