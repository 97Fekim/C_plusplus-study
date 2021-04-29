#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	/* 전위 증가 연산자 구현 */
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	/* 후위 증가 연산자 구현 (Dummy로 int가 param으로 들어간다)*/
	Digit operator ++ (int)
	{
		Digit temp(m_digit);
		++(*this);

		return temp;
	}


	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}

};

int main()
{


}