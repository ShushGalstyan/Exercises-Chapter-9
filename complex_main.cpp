#include <iostream>
using namespace std;

#include "complex.h"
#include "complex.cpp"

int main()
{
	Complex b(1,7), c(9,2);
	b.printComplex();
	cout<< " + ";
	c.printComplex();
	cout << " = ";
	b.addition(c);
	b.printComplex();
	cout<<"\n";
	b.setComplexNumber(10,1);
	c.setComplexNumber(9, 0);
	b.printComplex();
	cout << " - ";
	c.printComplex();
	cout<< " = ";
	b.subtraction(c);
	b.printComplex();
	cout<< "\n";
	return 0;

}
