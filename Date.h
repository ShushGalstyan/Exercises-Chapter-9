//Date class declaration.
//prevent multiple inclusions of header
#ifndef DATE_H
#define DATE_H
//class Date definition
class Date
{
public:
	Date(int = 9, int = 3, int = 1999);
	void print();
private:
	int month;
	int day;
	int year;
};
#endif
