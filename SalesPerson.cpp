// SalesPerson class member-function definitions.
#include <iostream>
#include <iomanip>
#include "SalesPerson.h"
using namespace std;
//initalizes emelemt of array sales to 0.0
SalesPerson::SalesPerson()
{
	for(int i = 0; i<monthPerYear; ++i)
		sales[i]=0.0;
}

//get 12 sales figures from the user at the keyboard
void SalesPerson::getSalesFromUser()
{
	double salesFigure;
	for(int i=1; i<=monthPerYear; ++i)
	{
		cout<<"Enter  sales amount for month  "<< i <<": ";
		cin>>salesFigure;
		setSales(i,salesFigure);
	}

}
// set one of the 12 monthly sales figures; function subtracts
// one from month value for proper subscript in sales array
void SalesPerson::setSales(int month, double amount)
{
	//test for valis month and amount values
	if(month >=1 && month <=monthPerYear && amount >0)
		sales[month -1] = amount;
	else
		cout<<"Invalid month or sales figure"<<endl;

}

// print total annual sales (with the help of utility function)
void SalesPerson::printAnnualSales()
{
	cout<<setprecision(2)<<fixed<<"\nthe total annual sales are: $"<<totalAnnualSales()<<endl;
}

double SalesPerson::totalAnnualSales()
{
	double total = 0.0;
	for(int i=0; i<monthPerYear; ++i)
		total += sales[i];
	return total;

}
