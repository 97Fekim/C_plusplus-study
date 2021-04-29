#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	/* - 연산자 함수 구현 */
	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	/* ! 연산자 함수 구현 */
	bool operator ! () const
	{
		if (this->m_cents == 0)
			return true;
		else return false;
	}


	friend std::ostream& operator << (ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};


int main()
{
	Cents cents1(6);
	Cents cents2(0);

	cout << cents1 << endl;
	cout << -cents1 << endl;
	cout << -Cents(-10) << endl;
	cout << !cents1 << endl;


	return 0;
}