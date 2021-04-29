#include<iostream>

using namespace std;

class B;

class A
{
private:
	int m_value = 1;

	/* doSomething �Լ��� class A�� friend�� �����ϹǷν�
	   private������� ���� �����ϴ�. */
	friend void doSomething(A& a, B& b);

};


class B
{
private:
	int m_value = 2;

	/* doSomething �Լ��� A�� ���������� class B�� friend��
	   �����ϹǷν� private������� ���� �����ϴ�. */
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