#include<iostream>
using namespace std;

/* 예제1 */
//class Mother
//{
//public:
//	int m_i;
//
//	Mother(const int & i_in=3)
//		: m_i(i_in)
//	{
//		cout << "Mother constructor" << endl;
//	}
//
//};
//
//class Child : public Mother
//{
//public:
//	double m_d;
//
//public:
//	Child()
//		: Mother(),m_d(1.0)
//	{
//		cout << "Child constructor" << endl;
//	}
//
//};

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}
};

/* 엄마가 먼저다!! */
int main()
{
	C c;

	return 0;
}