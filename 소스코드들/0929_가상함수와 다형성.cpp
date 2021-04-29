#include <iostream>

using namespace std;


class A
{
public:
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	virtual void print() { cout << "B" << endl; }

};

class C : public B
{
public:
	virtual void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	virtual void print() { cout << "D" << endl; }
};


int main()
{
	A a;
	//a.print();

	B b;
	//b.print();

	C c;
	//c.print();

	D d;
	//d.print();


	/* 가장 상위클래스의 함수가 virtual 이면 그 아래의
	   모든 같은 overloading된 함수들은 virtual이 된다.
	   상습적으로 그냥 모두 virtual처리를 하는 경우가 많다.*/
	B& ref = c;
	ref.print();


	return 0;
}