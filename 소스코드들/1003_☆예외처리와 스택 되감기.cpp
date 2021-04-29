#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void first();
void second();
void third();
void last();


void first()
{
	cout << "first" << endl;

	try
	{
		second();
	}

	// 여기서 에러를 받았기 때문에 End first는 정상실행 되었음.
	catch (int)
	{
		cerr << "first caught int exception" << endl;
	}

	cout << "End first" << endl;	
}


void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}

	catch (double) 
	{
		cerr << "Second caught double exception" << endl;	// 실행이 안되었음
	}

	cout << "End second" << endl;
}


void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;	// 실행이 안되었음
}


/* throw(int)는 "int형 에러를 던질수도 있다"
   로 해석하면 된다. */
void last() throw(int) // 괄호안에 아무것도 안넣고, 함수에선 던지면 오류가 난다.
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	throw - 1;

	cout << "End last" << endl;	// 실행이 안되었음
}


int main()
{
	cout << "Start" << endl;


	try
	{
		first();
	}

	catch (int)
	{
		cerr << "Main caught int exception" << endl;
	}

	catch (...)		// ellipses,, 모든 자료형의 에러를 받는다.
	{				// runtime-error 방지의 최후의 보루로써 사용하도록 하자.
		cerr << "main caught ellipses exception" << endl;	
	}
	cout << "End Main" << endl;

	return 0;
}