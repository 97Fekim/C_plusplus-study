#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string my_str("01234567");

	/* �̸� �뷮�� Ȯ���Ѵ�(�ּ��� �������� ��ƴ޶�) */
	my_str.reserve(1000);

	cout << std::boolalpha;
	/* c++ ������ ���� null character�� ���� */
	cout << my_str.length() << endl;
	cout << my_str.size() << endl;

	/* capacity�� ��Ȳ�� ���� �޶�����. */
	cout << my_str.capacity() << endl;
	cout << my_str.max_size() << endl;	// �Ǥ̤�..


	return 0;

}