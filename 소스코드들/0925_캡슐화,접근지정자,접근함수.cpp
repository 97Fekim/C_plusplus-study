#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
	// 멤버들의 값 (private로 숨겨져 있다.)
private:			// access specifier
	int m_month;
	int m_day;
	int m_year;

public:

	// 멤버들을 초기화하는 함수
	void setDate(const int& month_input, const int& day_input,
		const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	// 멤버들을 출력하는 함수
	void print_Date() 
	{
	cout << m_year << " " << m_month << " " << m_day << " " << endl;
	}

	// 일자 를 반환하는 함수
	const int& getDay()
	{
		return m_day;
	}

	// 복사하는 함수
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