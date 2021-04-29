#include <iostream>
using namespace std;

int getResult()
{
	return 3;
}

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int&& lref)
{
	cout << "R-value ref" << endl;
}

int main()
{

	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();
	
	/* ref�� l-value�� ���� �� ���� */
	int& lr1 = x;		// lr1�� x�� �ּ�,���� ��� �����ϸ�, ���ϰ� ��� ����.
	//int &lr2 = cx;	// const�� ����̹Ƿ� ref �ڷ����� �� �� ����.
	//int& lr3 = 5;		// r-value �� ref �ڷ����� �� �� ����


	/* �� ���� �� �ִ� */
	const int& lr4 = x;
	const int& lr5 = cx;
	const int& lr6 = 5;


	/* &&�� r-value�� ���� �� ���� */
	int&& rr1 = x;
	int&& rr2 = cx;
	int&& rr3 = 5;
	const int&& rr4 = x;
	const int&& rr5 = cx;
	const int&& rr6 = 5;
	int&& rrr = getResult();
	
	doSomething(x);
	doSomething(5);
	doSomething(getResult());

	return 0;
}