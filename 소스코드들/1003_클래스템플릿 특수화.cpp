#include <iostream>
#include "Storage8.h"

using namespace std;

/* 예제1 */
template<typename T>
class A
{
public:
	A(const T& input)
	{}

	void doSomething()
	{
		/* 타입의 이름을 출력 */
		cout << typeid(T).name() << endl;
	}

	void test()
	{}

};

template<>
class A<char>
{
public:
	A(const char)
	{}

	void doSomething()
	{	
		/* 타입의 이름을 출력(char로 특수화) */
		cout << "Char type specialization" << endl;
	}
};


int main()
{
	/* 예제1 */
	//A<int> a_int(1);
	//A<double> a_double(3.14);
	//A<char> a_char('a');

	//a_int.test();
	//a_double.test();
	////a_char.test();	// X

	//a_int.doSomething();
	//a_double.doSomething();
	//a_char.doSomething();


	/* 예제2 */
	Storage8<int> intStorage;

	for (int count = 0; count < 8; count++)
		intStorage.set(count, count);

	for (int count = 0; count < 8; count++)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<int>" << sizeof(Storage8<int>);

	return 0;
}

