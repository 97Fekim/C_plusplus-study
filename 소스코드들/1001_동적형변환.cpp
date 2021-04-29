#include <iostream>
#include <string>


using namespace std;

class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "i'm Base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int m_j = 1024;

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "Dr. Two";

	virtual void print() override
	{
		cout << "I'm derived" << endl;
	}
};


int main()
{
	
	Derived1 d1;
	d1.m_j = 2048;
	Base* base = &d1;

	/* Base Ÿ�Կ����� m_j�� ������ �� ����. ����ȯ�� ����� ����*/
	//base.m_j; // ??

	// but ������ ������� �ʴ� ���� ����.
	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	cout << base_to_d1->m_j << endl;

	base_to_d1->m_j = 256;

	cout << d1.m_j << endl;


	// dynamic_cast�� casting�� �����ϸ� null�����͸� �־������.
	// dynamic_cast ��� static_cast�� �����ϴ�.
	auto* base_to_d2 = dynamic_cast<Derived2*>(base);

	if (base_to_d2 == NULL)
		cout << "NUll ptr" << endl;
	else
		cout << base_to_d2->m_name << endl;

}

