#include "Resource.h"
#include "AutoPtr.h"
using namespace std;


// RAII(������ �Ҹ��� �Բ�)
void doSomething()
{
	//Resource* res = new Resource;

	//if (true) return; // early return.

	//delete res;

	//return;

	try
	{
		AutoPtr<Resource> res(new Resource);	// ����Ʈ������

		if (true)
		{
			throw - 1;
		}

	}

	catch(...)
	{ }

}


int main()
{
	//doSomething();

	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;	// move semantics (������ ����)

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

	}


	return 0;
}