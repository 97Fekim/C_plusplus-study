#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	///* +��ȣ�� �߰��ؼ� ������ش� */
	//cout.setf(std::ios::showpos);
	//cout << 108 << endl;

	
	///* +��ȣ�� �����ؼ� ������ش� */
	//cout.unsetf(std::ios::showpos);
	//cout << 109 << endl;

	
	///* 10������带 ���� */
	//cout.unsetf(std::ios::dec);
	///* 16�������� ��� */
	//cout.setf(std::ios::hex);
	//cout << 108 << endl;


	///* 10������带 ���� �ʰ�, 16�������� ����� ���� */
	//cout.setf(std::ios::hex, std::ios::basefield);
	//cout << 108 << endl;


	cout.setf(std::ios::uppercase);
	cout << std::hex;
	cout << 108 << endl;
	cout << 108 << endl;

	cout << std::dec;
	cout << 110 << endl;


	return 0;
}