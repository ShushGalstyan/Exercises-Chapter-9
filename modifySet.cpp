//(Returning Error Indicators from Class Time ’s set Functions) Modify the set functions in the Time class of Figs. 9.8–9.9 to return appropriate error values if an attempt is made to set a data mem-ber of an object of class Time to an invalid value. Write a program that tests your new version of class Time . Display error messages when set functions return error values.
#include <iostream>
#include "modifySet.h"
using namespace std;
Time::Time( int hr, int min, int sec )
{ setTime( hr, min, sec ); }
void Time::setTime( int h, int m, int s )
{
	setHour( h );
	setMinute( m );
	setSecond( s );
}

void Time::setHour( int hr)
{
	if ( hr >= 0 && hr <24){
		hour = hr;
		setInvalidTime( 1);
	}
	else {
		hour = 0;
		setInvalidTime( 0);
	}
}
void Time::setMinute( int min )
{
	if ( min >= 0 && min < 60 ) {
		minute = min;
		setInvalidTime( 1 ); // minute is valid
	}
	else {
		minute = 0;
		setInvalidTime( 0 ); // minute is invalid
	}
}
void Time::setSecond( int sec )
{
	if ( sec >= 0 && sec < 60 ) {
		second = sec;
		setInvalidTime( 1 ); // second is valid
	}
	else {
		second = 0;
		setInvalidTime( 0 ); // second is invalid
	}
}
void Time::printMilitary( void)
{
	cout << ( hour < 10 ? "0" :"")<<hour<<":"<< ( minute < 10 ? "0": "")<<minute<<":"<< ( second < 10 ? "0": "")<<second;
}
void Time::printStandard( void )
{
	cout << ( ( hour % 12 == 0 ) ? 12 : hour % 12 ) << ':'<< ( minute < 10 ? "0": "" ) << minute << ':'<< ( second < 10 ? "0": "" ) << second<< ( hour < 12 ? " AM" : " PM" );
}
