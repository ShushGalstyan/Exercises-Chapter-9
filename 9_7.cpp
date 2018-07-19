//Demostrate that class objects can be assigned to each other using default memberwise assignment.
#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;
int main()
{
	Date date1(18,7,2018);
	Date date2;//date2 defaults to 9/3/1999
	cout<<"date1 = ";
	date1.print();
	cout<<endl;
	cout << "date2 = ";
	date2.print();
	date2 = date1;
	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout<<endl;
}
