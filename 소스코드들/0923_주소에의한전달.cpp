#include<iostream>

using namespace std;

void foo(int* ptr)
{
	cout << ptr << endl;
	cout << *ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;		// �Լ��� �ּҿ����� ������ �ϸ� ��� �Ȱ��� �ּ�, ���� ���´�.

	int* ptr = &value;

	foo(ptr);
	foo(&value);
	


	return 0;
}