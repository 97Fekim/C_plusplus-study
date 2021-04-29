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

	/* Base 타입에서는 m_j에 접근할 수 없다. 형변환을 해줘야 가능*/
	//base.m_j; // ??

	// but 가급적 사용하지 않는 것이 좋다.
	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	cout << base_to_d1->m_j << endl;

	base_to_d1->m_j = 256;

	cout << d1.m_j << endl;


	// dynamic_cast는 casting을 실패하면 null포인터를 넣어버린다.
	// dynamic_cast 대신 static_cast도 가능하다.
	auto* base_to_d2 = dynamic_cast<Derived2*>(base);

	if (base_to_d2 == NULL)
		cout << "NUll ptr" << endl;
	else
		cout << base_to_d2->m_name << endl;

}

