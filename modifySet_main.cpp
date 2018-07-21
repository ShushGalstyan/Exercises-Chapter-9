#include <iostream>
#include "modifySet.h"
#include "modifySet.cpp"
using namespace std;
int main()
{
	Time t1( 17, 34, 25 ), t2( 99, 345, -897 );

	// all t1 object's times are valid
	if ( !t1.getInvalidTime() )

 		cout << "Error: invalid time setting(s) attempted." << '\n'<< "Invalid setting(s) changed to zero." << '\n';

	t1.printStandard();
// object t2 has invalid time settings
	if ( !t2.getInvalidTime() )
		cout << "\nError: invalid time setting(s) attempted.\n"<< "Invalid setting(s) changed to zero.\n";

	t2.printMilitary();

	cout << endl;


	return 0;

}
