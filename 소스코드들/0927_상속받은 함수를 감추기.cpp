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

	// public �ȿ� using Base::m_i�� �ϸ�, 
	// Derived �ȿ����� public�� �ȴ�!
	using Base::m_i;

private:
	// ���� ����ó��, private ������
	// using���� �ι�����, ����� �� ���� ������� �ֵ�.
	using Base::print; // �Լ��� ��ȣx

	// delete �ع������ν� ������� ���ϰ� �� ���� �ִ�.
	void print() = delete;

};


int main()
{
	Derived derived(7.5);

	derived.m_i = 5;
	derived.print();

	return 0;
}