#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	/*const char my_strs[] = "Hello, world";
	const string my_hello{ "Hello, world" };

	string my_ID = "123";

	cout << my_hello << endl;*/

	cout << "Your age : ";
	int age(0);
	cin >> age;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	cout << "Your name : ";
	string name{ NULL };	// cin�� ��ĭ�� ������ �Է��� ������.
	//cin >> name;
	std::getline(std::cin, name);
	

	cout << endl;
	cout << "Your name : " << name << endl;
	cout << "Your age : " << age << endl;
	cout << "string size is : " << name.size() << endl;


	return 0;

}


//
//int main()
//{
//	string a("Hello, ");
//	string b("World");
//	string hw = a + b;		// string�̶�� ��ü�� + ������ ���ǵǾ� �־ ����.
//
//	hw += " I'm good";
//
//	cout << hw << endl;
//	cout << a.length() << endl;
//	return 0;
//}