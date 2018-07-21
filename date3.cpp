//(Enhancing Class Date ) Modify the Date class of Figs. 9.17–9.18 to perform error checking on the initializer values for data members month , day and year . Also, provide a member function nextDay to increment the day by one. Write a program that tests function nextDay in a loop that prints the date during each iteration to illustrate that nextDay works correctly. Be sure to test the following cases:
//a) Incrementing into the next month.
//b) Incrementing into the next year.
#include <iostream>
#include "date3.h"
using namespace std;
Date::Date( int m, int d, int y ) { setDate( m, d, y ); }
int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }
void Date::setDay(int d)
{
	if ( month == 2 && leapYear())
		day = ( d <=29 && d>=1)? d: 1;
	else
		day = ( d <=monthDays() && d>=1)? d: 1;
}

void Date::setMonth( int m ) { month = m <= 12 && m >= 1 ? m : 1; }
void Date::setYear( int y )
{
	year = y <= 2000 && y >= 1900 ? y : 1900;
}
void Date::setDate( int mo, int dy, int yr )
{
	setMonth( mo );
	setDay( dy );
	setYear( yr );
}
void Date::print() { cout << month << '-' << day << '-' << year << '\n'; }
void Date::nextDay()
{
	setDay( day + 1 );
	if ( day == 1 ) {
		setMonth( month + 1 );
		if ( month == 1 )
			setYear( year + 1 );
	}
}
bool Date::leapYear( void )
{
	if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
		return true;
	else
		return false;
// not a leap year
}
int Date::monthDays( void )
{
	const int days[ 12 ] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
	return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}

