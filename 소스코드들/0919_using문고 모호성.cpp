#include <iostream>

namespace a
{
	int n(10);
}

namespace b
{
	float n(20.3f);
}

int main()
{
	using std::cout;
	using std::endl;

	cout << "Hello" << endl;

	//using namespace a;
	//using namespace b;

	cout << a::n << endl;
	cout << b::n << endl;


	{	
		using namespace a;
		cout << n << endl;
	}
	{
		using namespace	b;
		cout << n << endl;
	}

	return  0;
}