#include <iostream>

using namespace std;

/* 요런 괴상한 구조로도 사용이 가능 */
//void doSomething()
//try
//{
//	throw - 1;
//}
//	catch (...)
//{
//	std::cout << "Catch in doSomething" << std::endl;
//}


class A
{
private:
	int m_x;

public:
	A(int x) : m_x(x)
	{
		if (x <= 0)
			throw 1;
	}

};


class B : public A
