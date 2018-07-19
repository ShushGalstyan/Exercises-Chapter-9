// Utility function demonstration.
// Compile this program with SalesPerson.cpp
//9_3.cpp
#include <iostream>
#include "SalesPerson.h"
#include "SalesPerson.cpp"
int main()
{
	SalesPerson s;
	s.getSalesFromUser();
	s.printAnnualSales();
}
