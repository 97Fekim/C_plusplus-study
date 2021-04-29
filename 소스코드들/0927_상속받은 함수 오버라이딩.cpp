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

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		out << "This is base output" << endl;
		return out;
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

	// Mother class에 있는 함수를 사용하고 싶다면
	// Bass:: 를 붙여서 사용하면 된다.
	void print()
	{
		cout << "I'm a derived" << endl;
		Base::print();
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);

		out << "This is Derived output" << endl;
		return out;
	}

};


int main()
{
	Base base(5);
	cout << base;

	Derived derived(7);
	cout << derived;
}

