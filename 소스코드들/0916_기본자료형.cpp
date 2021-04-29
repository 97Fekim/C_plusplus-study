#include <iostream>

using namespace std;

int main()
{
	
	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;


	auto aValue = 3.141592;
	auto aValue2 = 3.141592f;


	cout << chValue << endl;
	cout << bValue << endl;
	cout << fValue << endl;
	cout << dValue << endl;
	cout << sizeof(aValue) << endl;
	cout << sizeof(aValue2) << endl;
	cout << sizeof(bool) << endl;

	
	// 초기화 initialization
	int i = (int)3.316;	// copy initialization
	int a(123);			// direct initialization
	int b{ 123 };		// uniform initialization
	//int b{ 4.5 }		// X!
	int k = 0, l(456), m{ 123 };	// 권장하지는 않는다.




	return 0;

}