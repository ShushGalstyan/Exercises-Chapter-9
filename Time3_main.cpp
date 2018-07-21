#include <iostream>
#include "Time3.h"
#include "Time3.cpp"
using namespace std;
const int MAX_TICKS = 3000;
main()
{
	Time t;
	t.setTime( 11, 33, 57 );
	for ( int ticks = 1; ticks < MAX_TICKS; ++ticks ) {
		t.printStandard();
		cout << endl;
		t.tick();
	}
	return 0;
}
