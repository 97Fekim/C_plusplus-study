#include <iostream>
#include <memory>

using namespace std;


class A
{
public:

	/* �Ҹ��ڿ��� ���ܸ� �����°��� �ݱ���� */
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
		unique_ptr<int> upi(i);	// ����ũ�����Ͱ� �˾Ƽ� ������~


		throw "error";
	}

	catch(...){}
}