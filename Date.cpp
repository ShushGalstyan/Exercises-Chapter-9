//Date class member-function definition.
#include <iostream>
#include "Date.h"
using namespace std;
//Date constructor (should do range checking)
Date::Date(int d,int m, int y)
{
	month = m;
	day = d;
	year =y;
}

//print Sate in the format mm/dd/yyyy
void Date::print()
{
	cout<<day<<"/"<<month<< "/"<< year;
}
