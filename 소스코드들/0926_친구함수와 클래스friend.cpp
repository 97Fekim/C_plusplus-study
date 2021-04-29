#include<iostream>

using namespace std;

class B;

class A
{
private:
	int m_value = 1;

	/* doSomething 함수를 class A에 friend로 선언하므로써
	   private멤버에도 접근 가능하다. */
	friend void doSomething(A& a, B& b);

};


class B
{
private:
	int m_value = 2;

	/* doSomething 함수를 A와 마찬가지로 class B에 friend로
	   선언하므로써 private멤버에도 접근 가능하다. */
	friend void doSomething(A& a, B& b);
};


void doSomething(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
	A a;
	B b;
	doSomething(a, b);

	return 0;


}