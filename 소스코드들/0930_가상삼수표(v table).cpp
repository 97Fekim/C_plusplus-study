#include <iostream>

using namespace std;

class Base
{
public:
	virtual void func1() {};
	void func2() {};
};

class Der : public Base
{
public:
	void func1() {};
	void func3() {};

};

int main()
{
	
	/* virtual�� �ϳ����̸�, �����Լ��� �����͸� ���� �ǹǷ�
	   1 byte ���� 4 byte�� ũ�Ⱑ �����ϴ� ���� �� �� �ִ�. */
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;


	return 0;
}