#include <iostream>

int main()
{
	using namespace std;
	
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	//ptr = &i;
	ptr = &f;
	//ptr = &c;

	int* ptr_i = &i;

	/* ���̵������͸� Ȱ���Ϸ���, void -> �ش��ڷ��� ���� ����ȯ�� ���־�� �Ѵ�.!*/
	cout << *static_cast<float*>(ptr) << endl;	 


	return 0;

}