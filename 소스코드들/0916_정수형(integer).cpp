#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << std::pow(2, sizeof(short) * 8 - 1) << endl;		// pow(x,y) 는 x^y 이다.
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	// overflow.
	s = 32768;
	s++;
	cout << s << endl;

	s = -32768;
	s--;
	cout << s << endl;

	unsigned int t = -1;	// C++의 문제중 하나.
	cout << t << endl;




	return 0;
}