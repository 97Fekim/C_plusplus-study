#include <iostream>

using namespace std;

void my_fuction(void)
{


}


int main()
{
	
	// �������� Ÿ��(int,char etc..)�� �ٸ�����, 
	// �� �����͵��� �������� �԰��� ��� ����. 1byte,,
	// �׷��� � �ڷ����� ���� ��������, �������� �԰���
	// �Ӵٸ� ���ٸ� �� �� �ִµ� �װ��� void �����ͷε� ���� �����ϴٴ� ���̴�.
	int i = 123;
	float f = 123.456f;
	
	void* my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	cout << my_void << endl;

	return 0;

}