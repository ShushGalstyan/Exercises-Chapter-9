// Fig. 9.15: Time.cpp
// Time class member-function definitions.
#include <stdexcept>
#include "Time2.h" // include definition of class Time
using namespace std;
// constructor function to initialize private data; calls member function
// setTime to set variables; default values are 0 (see class definition)
Time::Time()
{
	setTime(int hr, int min, int sec);
}
// set values of hour, minute and second
void Time::setTime( int h, int m, int s )
{
// validate hour, minute and second
	if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && ( s >= 0 && s < 60 ) )
	{
		hour = h;
		minute = m;
		second = s;
	} // end if
	else
		throw invalid_argument("hour, minute and/or second was out of range" );
} // end function setTime
// return hour value
int Time::getHour()
{
	return hour;
} // end function getHour
// POOR PRACTICE: Returning a reference to a private data member.
int &Time::badSetHour( int hh )
{
	if ( hh >= 0 && hh < 24 )
		hour = hh;
	else
		throw invalid_argument( "hour must be 0-23" );
	return hour; // DANGEROUS reference return
} // end function badSetHour
