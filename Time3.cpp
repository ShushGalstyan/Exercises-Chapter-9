//Enhancing Class Time ) Modify the Time class of Figs. 9.8–9.9 to include a tick member function that increments the time stored in a Time object by one second. Write a program that tests the tick member function in a loop that prints the time in standard format during each iteration of the loop to illustrate that the tick member function works correctly. Be sure to test the following cases:
//a) Incrementing into the next minute.
//b) Incrementing into the next hour.
//c) Incrementing into the next day (i.e., 11:59:59 PM to 12:00:00 AM).
//member function definition
#include <iostream>
#include "Time3.h"
using namespace std;  
Time::Time( int hr, int min, int sec ) { setTime( hr, min, sec ); }
void Time::setTime( int h, int m, int s )
{
	setHour( h );
	setMinute( m );
	setSecond( s );
}
void Time::setHour( int h ) { hour = ( h >= 0 && h < 24 ) ? h : 0; }
void Time::setMinute( int m )
{
	minute = ( m >= 0 && m < 60 ) ? m : 0;
}
void Time::setSecond( int s )
{
	second = ( s >= 0 && s < 60 ) ? s : 0;
}
int Time::getHour( void ) { return hour; }
int Time::getMinute( void ) { return minute; }
int Time::getSecond( void ) { return second; }
void Time::printStandard( void )
{
	cout << ( ( hour % 12 == 0 ) ? 12: hour % 12) << " : " << ( minute < 10 ? "0" :"")<<minute<< ":"<< ( second < 10 ? "0" : "")<<second<< ( hour < 12 ? " AM" :"PM");
}
void Time::tick( void )
{
	setSecond( getSecond() + 1 );
	if ( getSecond() == 0 ) {
		setMinute( getMinute() + 1 );
		if ( getMinute() == 0 )
			setHour( getHour() + 1 );
	}	
}
