#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	/* ����1 */
	//char buf[10];

	//// 5���ڱ����� �ް� ���ش�.
	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	
	/* ����2 */

	//char ch;

	//// get�Լ��� �̿��ϸ� ��ĭ���� �Է°���
	//while (cin.get(ch))
	//	cout << ch;

	/* ����4 */
	//char buf[5];

	//cin.get(buf, 5);
	//// gcount�� ����ڸ� �о�����,,
	//cout << cin.gcount() << " " << buf << endl;

	//cin.getline(buf, 5);

	//cout << buf;



	char buf[1024];
	/* ignore�� x������ �Է��� �����Ѵ� */
	//cin.ignore(2);

	//cout << (char)cin.peek() << endl;

	cin >> buf;
	cout << buf << endl;

	cin.unget(); // �������� ���� ���� ���ۿ� �־������.

	cin >> buf;
	cout << buf << endl;

	cin.putback('A');	// ���ϴ� ���ڸ� ���ۿ� �ִ´�.

	cin >> buf;
	cout << buf << endl;


	return 0;
}