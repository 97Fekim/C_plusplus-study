#include <iostream>

using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	virtual ~Derived() override
	{
		cout << "~Derived" << endl;
		delete[] m_array;
	}
};

int main()
{
	//Derived derived(5);

	// Base의 소멸자를 virtual로 만들면 자식의 소멸자가 호출이 된다.
	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base;


	return 0;
}