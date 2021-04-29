#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}
	
	Fraction(const Fraction &fraction)
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

Fraction doSomething()
{
	Fraction temp(1, 2);

	return temp;
}



int main()
{
	Fraction frac(3, 5);
	Fraction fr_copy(frac);
	Fraction fr_copy2(Fraction(7, 8));  // 만들어서 넣는것도 가능ㅇㅇ


	cout << frac << fr_copy << fr_copy2 << endl;


	/* Debug에서는 copy를 거치지만, release에서는 거치지 않는다.
	   이를 반환값 최적화라고 정의한다. */
	Fraction result = doSomething();


	return 0;
}

