#include <iostream>
using namespace std;

/* 예제1 */
//class A
//{
//public:
//	virtual void print(int x) final { cout << "A" << endl; }
//
//};
//
//class B : public A
//{
//public:
//	void print(int x) { cout << "B" << endl; }
//};
//
//class C : public B
//{
//public:
//	void print() { cout << "C" << endl; }
//};


/* 예제2 */
class A
{
public:
	void print() { cout << "A" << endl; }
	virtual A* getThis() { return this; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
	virtual B* getThis() { return this; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;

	A& ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	return 0;
}