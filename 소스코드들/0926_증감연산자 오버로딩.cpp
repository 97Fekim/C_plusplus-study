#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit) {}

	/* ���� ���� ������ ���� */
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	/* ���� ���� ������ ���� (Dummy�� int�� param���� ����)*/
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