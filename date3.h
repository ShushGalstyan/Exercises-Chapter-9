#ifndef p6_09_H
#define p6_09_H
#include <iostream>
class Date {
public:
	Date( int = 1, int = 1, int = 1900 );
	void print( void );
	void setDate( int, int, int );
	void setMonth( int );
	void setDay( int );
	void setYear( int );
	int getMonth( void );
	int getDay( void );
	int getYear( void );
	bool leapYear( void );
	int monthDays( void );
	void nextDay( void );
private:
	int month;
	int day;
	int year;
};
// default constructor
#endif
