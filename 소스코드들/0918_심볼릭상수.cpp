#include <iostream>
#include "MyConstants.h"


using namespace std;

int main()
{
	
	/*  constexpr Å°¿öµå  */
	/*constexpr int number(123);
	
	const int special_number(number);

	cout << number << endl;
	cout << special_number << endl;*/

	double radius;

	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	cout << circumference << endl;

	return 0;

}