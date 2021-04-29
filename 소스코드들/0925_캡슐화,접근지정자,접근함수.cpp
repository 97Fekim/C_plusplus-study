#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
	// ������� �� (private�� ������ �ִ�.)
private:			// access specifier
	int m_month;
	int m_day;
	int m_year;

public:

	// ������� �ʱ�ȭ�ϴ� �Լ�
	void setDate(const int& month_input, const int& day_input,
		const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	// ������� ����ϴ� �Լ�
	void print_Date() 
	{
	cout << m_year << " " << m_month << " " << m_day << " " << endl;
	}

	// ���� �� ��ȯ�ϴ� �Լ�
	const int& getDay()
	{
		return m_day;
	}

	// �����ϴ� �Լ�
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

};

int main()
{
	Date today;

	today.setDate(9, 25, 2020);

	Date copy;
	copy.copyFrom(today);


	return 0;
}