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

	// ���⼭ ������ �޾ұ� ������ End first�� ������� �Ǿ���.
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
		cerr << "Second caught double exception" << endl;	// ������ �ȵǾ���
	}

	cout << "End second" << endl;
}


void third()
{
	cout << "Third" << endl;

	last();

	cout << "End third" << endl;	// ������ �ȵǾ���
}


/* throw(int)�� "int�� ������ �������� �ִ�"
   �� �ؼ��ϸ� �ȴ�. */
void last() throw(int) // ��ȣ�ȿ� �ƹ��͵� �ȳְ�, �Լ����� ������ ������ ����.
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	throw - 1;

	cout << "End last" << endl;	// ������ �ȵǾ���
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

	catch (...)		// ellipses,, ��� �ڷ����� ������ �޴´�.
	{				// runtime-error ������ ������ ����ν� ����ϵ��� ����.
		cerr << "main caught ellipses exception" << endl;	
	}
	cout << "End Main" << endl;

	return 0;
}