#include <iostream>

using namespace std;

class Base
{
public:
	virtual void func1() {};
	void func2() {};
};

class Der : public Base
{
public:
	void func1() {};
	void func3() {};

};

int main()
{
	
	/* virtual을 하나붙이면, 가상함수의 포인터를 갖게 되므로
	   1 byte 에서 4 byte로 크기가 증가하는 것을 알 수 있다. */
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;


	return 0;
}