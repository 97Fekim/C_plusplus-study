#include <iostream>
#include "instant.h"

using namespace std;

extern void dosomething();

int main()
{
	dosomething();
	
	cout << Constants::pi << " " << &Constants::pi << endl;

	return 0;
}