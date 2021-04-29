#include <iostream>
using namespace std;

class A
{
public:
	A(int a = 5)
	{
		cout << "A : " << a << endl;
	}

	~A()
	{
		cout << "Destructor A" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "b : " << b << endl;
	}

	~B()
	{
		cout << "Destructor B" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C : " << c << endl;
	}

	~C()
	{
		cout << "Destructor C" << endl;
	}
};


/* 생성은 mother가 먼저, 소멸은 mother가 나중에. */
int main()
{
	C c(1,70.6,'a');


	return 0;
}