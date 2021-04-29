#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	int a = 123.0;
	cout << typeid(a).name() << endl;

	float b = 1.0f;
	double d = a;	// promotion
	short s = 2;

	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;

	return 0;

}