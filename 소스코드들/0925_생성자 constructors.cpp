#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;


public:

	Fraction()
	{
		m_numerator = 1;
		m_denominator = 1;
	}

	Fraction(const int& num_in, const int& den_in=1)
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}


	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

};


int main()
{
	//Fraction frac{ 1,3 };	// type ��ȯ�� �ȉ�.
	//Fraction frac(1,3);		// type ��ȯ�� ��.

	Fraction frac_1;
	Fraction frac_2(7);

	frac_1.print();
	frac_2.print();


	return 0;

}


//class Second
//{
//public:
//	Second()
//	{
//		cout << "Class Second constructor()" << endl;
//	}
//
//};
//
//class First
//{
//	Second sec;
//
//public:
//	First()
//	{
//		cout << "Class First constructor()" << endl;
//	}
//
//};
//
//int main()
//{
//	First fir;		// Second �� ���� ����.
//
//	return 0;
//}