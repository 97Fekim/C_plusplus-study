#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("one");
	string str2("two");


	/* �����ϱ� */
	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append("three");	// append �� �����δٴ� ��
	//str2.append("four");


	/* �����ϱ� */
	/*cout << str1 << " " << str2 << endl;
	std::swap(str1, str2);
	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2 << endl;*/


	/* ��Ÿ append Ȱ�� */
	/*str1.append("three");
	str1 += "three";
	str1 = str2 + "four";*/


	return 0;
}