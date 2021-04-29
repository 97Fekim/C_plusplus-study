#include <iostream>
using namespace std;


class Exception
{
public:
	 void report()
	{
		cerr << "Exception report" << endl;
	}
};


class ArrayException : public Exception
{
public:
	 void report()
	{
		cerr << "Array exception" << endl;
	}

};



class MyArray
{
private:
	int m_data[5];

public:
	int& operator [] (const int& index)
	{
		/*if (index < 0 || index >= 5) 
			throw - 1;*/

	/*	if (index < 0 || index >= 5)
			throw Exception();*/

		if (index < 0 || index >= 5)
			throw ArrayException();

		return m_data[index];
	}

};


void doSomething()
{
	MyArray my_array;

	try
	{
		my_array[100];
	}

	catch (const int& x)
	{
		cerr << "Exception" << x << endl;
	}

	// ArrayException 객체를 에러로 받아서...
	catch (ArrayException& Ae)
	{
		cout << "in doSomething" << endl;
		Ae.report();
		throw Ae;
	}

	// Exception 객체를 에러로 받아서 객체의 함수를 실행시킨다.
	catch (Exception& e)
	{
		cout << "in doSomething" << endl;
		e.report();
		throw e;
	}

	
}


int main()
{
	
	try
	{
		doSomething();
	}


	// doSomething에서 예외처리를 했으므로, 아래 구문은 실행되지 않는다.
	// 하지만 doSomething 속 에서 throw를 한번더 하면 메인에서도 받을 수 있다.
	
	catch (ArrayException& Ae)
	{
		cout << "Main()" << endl;
		Ae.report();
	}

	catch (Exception& e)
	{
		cout << "Main()" << endl;
		e.report();
	}

	

	return 0;
}