#include <iostream>
#include <cassert>

using namespace std;


class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	// char로 들어오는 입력은 막아버리겠따.
	Fraction(char) = delete;	
	
	// explicit 키워드를 사용하면 param을 모두 넣어줘야 생성이 가능.
	explicit Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);

	Fraction frac1('c');	// delete으로 막아버렸기 때문에 안돼
	doSomething(7);			// param하나만 넣어도 자동으로,,
							// 근데 explicit을 생성자 앞에 넣으면 안돼
	doSomething(frac);


	return 0;
}