#include<iostream>

using namespace std;

void foo(int* ptr)
{
	cout << ptr << endl;
	cout << *ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;		// 함수에 주소에의한 전달을 하면 모두 똑같은 주소, 값을 갖는다.

	int* ptr = &value;

	foo(ptr);
	foo(&value);
	


	return 0;
}