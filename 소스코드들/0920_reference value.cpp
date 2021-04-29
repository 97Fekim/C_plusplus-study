#include <iostream>

using namespace std;


struct Something
{
	int v1;
	float v2;
};

int main()
{




	/*int value = 5;

	int& ref = value;

	cout << ref << " " << &ref << endl;
	cout << value << " " << &value << endl;*/

	const int y = 8;
	const int& ref = y;

	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;

	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;

	return 0;
}