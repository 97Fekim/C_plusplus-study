#include <iostream>

using namespace std;


class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const{ return m_cents; }
	int& getCents() { return m_cents; }
	
	/* 산술연산자(+) 구현함수. */
	Cents operator + (const Cents& c2)
	{
		return Cents(this->m_cents + c2.getCents());
	}
};

//Cents operator + (const Cents& c1, const Cents& c2)
//{
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents cents3 = cents1 + Cents(3);

	cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
	cout << cents3.getCents() << endl;

	return 0;

}