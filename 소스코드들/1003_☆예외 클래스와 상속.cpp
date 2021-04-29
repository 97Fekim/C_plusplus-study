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

	// ArrayException ��ü�� ������ �޾Ƽ�...
	catch (ArrayException& Ae)
	{
		cout << "in doSomething" << endl;
		Ae.report();
		throw Ae;
	}

	// Exception ��ü�� ������ �޾Ƽ� ��ü�� �Լ��� �����Ų��.
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


	// doSomething���� ����ó���� �����Ƿ�, �Ʒ� ������ ������� �ʴ´�.
	// ������ doSomething �� ���� throw�� �ѹ��� �ϸ� ���ο����� ���� �� �ִ�.
	
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