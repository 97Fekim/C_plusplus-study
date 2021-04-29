#include<iostream>
#include<vector>
#include<functional>
using namespace std;


class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << m_i << " I'm Base" << endl;
	}

};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << m_j << "I'm derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main(void)
{

	Base b;
	Derived d;


	// 아래는 std::vector<Base&>my_vec 처럼 작동을 한다.
	std::vector<std::reference_wrapper<Base>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();


	//Derived d;
	///*Base b = d;
	//b = d;*/

	//doSomething(d);

	////b.print();

	return 0;
}

