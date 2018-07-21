//(Complex Class) Create a class called Complex for performing arithmetic with complex numbers. Write a program to test your class. Complex numbers have the form
//realPart + imaginaryPart * i
///where i is –1
//Use double variables to represent the private data of the class. Provide a constructor that enables an object of this class to be initialized when it’s declared. The constructor should contain default values in case no initializers are provided. Provide public member functions that perform the following tasks:
//a) Adding two Complex numbers: The real parts are added together and the imaginary parts are added together.
//b) Subtracting two Complex numbers: The real part of the right operand is subtracted from the real part of the left operand, and the imaginary part of the right operand is subtracted from the imaginary part of the left operand.
//c) Printing Complex numbers in the form (a, b) , where a is the real part and b is the imaginary part.
//complex.cpp
//member function definition for complex.cpp
#include <iostream>
using namespace std;
#include "complex.h"
Complex::Complex( double real, double imaginary )
{ 
	setComplexNumber( real, imaginary ); 
}
void Complex::addition( const Complex &a )
{
	realPart += a.realPart;
	imaginaryPart += a.imaginaryPart;
}
void Complex::subtraction( const Complex &s )
{
	realPart -= s.realPart;
	imaginaryPart -= s.imaginaryPart;
}
void Complex::printComplex( void )
{ 
	cout << '(' << realPart << ", " << imaginaryPart << ')'; 
}
void Complex::setComplexNumber( double rp, double ip )
{
	realPart = rp;
	imaginaryPart = ip;
}
