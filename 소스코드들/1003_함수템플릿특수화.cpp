#include "Storage.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

/* char타입에만 작동하게끔 특수화 할 수 있다. */
template<>
char getMax(char x, char y)
{
	cout << "Warning : comparing chars" << endl;

	return (x > y) ? x : y;
}

int main()
{
	
	/*cout << getMax(1, 2) << endl;
	cout << getMax('a', 'b') << endl;*/
	
	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	nValue.print();
	dValue.print();

	return 0;

}