#include <iostream>

using namespace std;

int main()
{
	
	/*bool b1 = true;
	bool b2(false);
	bool b3{ true };
	
	b3 = false;

	cout << std::boolalpha;
	cout << b3 << endl;
	cout << b1 << endl;
	cout << !true << endl;
	cout << !false << endl;
	cout << !b1 << endl;
	cout << !b2 << endl;*/
	

	// �ε�ȣ ��ȣ�� to��ȯ�� ��� Ÿ��
	cout << static_cast<char>(65) << endl;		// 65�� char�� ĳ����
	cout << static_cast<int>('A') << endl;		// 'A'�� int�� ĳ����

	char c1(65);

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	return 0;

}