#include <iostream>
#include "Count.h"
using namespace std;

int main()
{
	Count c;
	cout << "c.x after instantiation: ";
	c.print();
	setX(c, 8);
	cout << "c.x after call setX friend function: ";
	c.print();

	return 0;
}
