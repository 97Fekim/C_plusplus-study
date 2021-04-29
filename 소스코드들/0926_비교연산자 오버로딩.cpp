#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	/* < 연산자 함수 구현 */
	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	/* > 연산자 함수 구현 */
	friend bool operator > (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents > c2.m_cents;
	}

	/* != 연산자 함수 구현 */
	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	/* == 연산자 함수 구현 */
	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

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
	/* 예제1 */
	/*Cents cents1(5);
	Cents cents2(5);

	if (cents1 != cents2) 
		cout << "Not Equal " << endl;
	else 
		cout << "Equal " << endl;

	if (cents2 == Cents(4))
		cout << "Equal" << endl;
	else 
		cout << "Not Equal" << endl;*/
	
	vector<Cents> arr(20);

	for (unsigned int i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	std::random_shuffle(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	/* 크기비교하는 opearator를 class에 추가해줘야 한다. */
	std::sort(begin(arr), end(arr));
	
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}