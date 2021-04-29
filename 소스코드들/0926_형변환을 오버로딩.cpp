#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	/* 정수형으로 형변환을 해주는 함수 구현. */
	operator int()
	{
		cout << "Cast Here" << endl;
		return m_cents;
	}

};

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int& input) : m_dollars(input) {}

	/* Dollar를 Cents로 변환해주는 함수 구현 */
	operator Cents()
	{
		return Cents(m_dollars * 100);
	}

};


void printInt(const int& value)
{
	cout << value << endl;
}


int main()
{
	//Cents cents(7);

	//printInt(cents);


	Dollar dol(2);

	Cents cents = dol;

	printInt(cents);


	return 0;
}