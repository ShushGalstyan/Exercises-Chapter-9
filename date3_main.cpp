#include <iostream>
#include "date3.h"
#include "date3.cpp"
using namespace std;
int main()
{
	const int MAXDAYS = 160;
	Date d(9,2,1999);
	for(int loop=1; loop<=MAXDAYS; ++loop)
	{
		d.print();
		d.nextDay();
	}
	cout<<endl;
	return 0;
}
	
