//9_2.cpp
// Demonstrating the class member access operators . and ->
#include <iostream>
using namespace std;
class Count
{
public:
	int setX(int value)
	{
		x = value;
	}
	void print()
	{
		cout<< x<<endl;	
	}
private:
	int x;
};

int main()
{
	Count Counter;
	Count *CounterPtr = &Counter;
	Count &CounterRef = Counter;
	cout << "Set x to 1 and print using the object's name: ";
	Counter.setX(1);
	Counter.print();
	cout << "Set x to 3 and print using a pointer to an object: ";
	CounterPtr->setX(2);
	CounterPtr->print();
	cout << "Set x to 2 and print using a reference to an object: ";	
	CounterRef.setX(3);
	CounterRef.print();

}

