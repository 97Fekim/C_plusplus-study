#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	/* ����1 */
	//cout << my_str[0] << endl;
	//cout << my_str[3] << endl;

	//my_str[4] = 'Z';

	//try 
	//{
	//	/* [] �̰�쿡�� ����ó���� ������ �ʴ´� */
	//	//my_str[100] = 'X';	// �����ս��� �߿��� ���

	//	/* at�� ����� throw�� ���ش� */
	//	my_str.at(100) = 'X';	// �������� �߿��� ���
	//}

	//catch (std::exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	/* ����2 */
	//cout << my_str.c_str() << endl;

	///* c_str�� ��������, null character�� �ٿ��ش� */
	//const char* arr = my_str.c_str();
	//cout << my_str.c_str()[6] << endl;	// c_str() = data() �̴�.
	//cout << my_str.data()[6] << endl; 

	//cout << (int)arr[6] << endl;
	//cout << (int)arr[7] << endl;

	/* ����3 */
	char buf[20];

	my_str.copy(buf, 5, 1);

	buf[5] = '\0';

	cout << buf << endl;

	return 0;
}