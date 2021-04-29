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
	
	/* ref는 l-value만 받을 수 있음 */
	int& lr1 = x;		// lr1은 x와 주소,값을 모두 공유하며, 편하게 사용 가능.
	//int &lr2 = cx;	// const는 상수이므로 ref 자료형에 들어갈 수 없어.
	//int& lr3 = 5;		// r-value 는 ref 자료형에 들어갈 수 없어


	/* 다 넣을 수 있다 */
	const int& lr4 = x;
	const int& lr5 = cx;
	const int& lr6 = 5;


	/* &&는 r-value만 받을 수 있음 */
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