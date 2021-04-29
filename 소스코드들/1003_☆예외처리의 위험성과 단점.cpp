#include <iostream>
#include <memory>

using namespace std;


class A
{
public:

	/* 소멸자에서 예외를 던지는것은 금기사항 */
	~A()
	{
		throw "error";
	}
};


int main()
{
	
	try
	{
		A a;
	}

	catch (...)
	{
		cout << "Catch" << endl;
	}

	try
	{
		int* i = new int[100000];
		unique_ptr<int> upi(i);	// 유니크포인터가 알아서 다해줘~


		throw "error";
	}

	catch(...){}
}