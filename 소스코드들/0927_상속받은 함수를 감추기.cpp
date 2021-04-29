#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm a base" << endl;
	}
	
};


class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	// public 안에 using Base::m_i를 하면, 
	// Derived 안에서는 public이 된다!
	using Base::m_i;

private:
	// 위의 예제처럼, private 공간에
	// using으로 싸버리면, 사용할 수 없게 만들수도 있따.
	using Base::print; // 함수에 괄호x

	// delete 해버림으로써 사용하지 못하게 할 수도 있다.
	void print() = delete;

};


int main()
{
	Derived derived(7.5);

	derived.m_i = 5;
	derived.print();

	return 0;
}