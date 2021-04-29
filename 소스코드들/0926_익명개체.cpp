#include <iostream>

using namespace std;


/* ����1 */
//class A
//{
//public:
//	int m_value;
//
//
//	A(const int& input)
//		: m_value(input)
//	{
//		cout << "constructor" << endl;
//	}
//
//
//	void printDouble()
//	{
//		cout << m_value * 2 << endl;
//	}
//
//
//	~A()
//	{
//		cout << "Destructor with " << m_value << endl;
//	}
//};
//
//
//int main()
//{
//	A a(3);
//	a.printDouble();
//
//	// �� ���ٰ� ����.
//	A(2).printDouble();
//
//	
//
//	return 0;
//}



/* ����2 */
class Cents
{
private:
	int m_cents;

public:
	Cents(int cents) { m_cents = cents; }

	int getCents() const { return m_cents; }


};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	/* add�� Cents�� �����ϰ� �����Ƿ� .getCents�� �ٿ��൵ �ȴ�. */
	cout << add(Cents(6), Cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;



	return 0;
}