#include <iostream>

using namespace std;

namespace Myspace1
{
	namespace Myspace1_1 
	{
		int doSomething(int a, int b)
		{
			return a * b;
		}
	}
}

//int doSomething(int a, int b)
//{
//	return a + b;
//}

int main()
{

	using namespace Myspace1::Myspace1_1;
		
	cout << doSomething(3, 4) << endl;

	return 0;
}