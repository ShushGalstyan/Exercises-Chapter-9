#ifndef P6_11_H
#define P6_11_H

#include <iostream>
class Time {
public:
	Time( int = 0, int = 0, int = 0 );
	void setTime( int, int, int );
	void setHour( int );
	void setMinute( int );
	void setSecond( int );
	void setInvalidTime( int t ) { invalidTime = t; }
	int getHour( void ) { return hour; }
	int getMinute( void ) { return minute; }
	int getSecond( void ) { return second; }
	int getInvalidTime( void ) { return invalidTime; }
	void printMilitary( void );
	void printStandard( void );
private:
	int hour;
	int minute;
	int second;
	int invalidTime;
// set if an invalid time is attempted
};
#endif
