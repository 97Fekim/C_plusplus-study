#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	/* 예제1 */
	//char buf[10];

	//// 5글자까지만 받게 해준다.
	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	//cin >> setw(5) >> buf;

	//cout << buf << endl;

	
	/* 예제2 */

	//char ch;

	//// get함수를 이용하면 빈칸까지 입력가능
	//while (cin.get(ch))
	//	cout << ch;

	/* 예제4 */
	//char buf[5];

	//cin.get(buf, 5);
	//// gcount는 몇글자를 읽었는지,,
	//cout << cin.gcount() << " " << buf << endl;

	//cin.getline(buf, 5);

	//cout << buf;



	char buf[1024];
	/* ignore는 x글자의 입력을 무시한다 */
	//cin.ignore(2);

	//cout << (char)cin.peek() << endl;

	cin >> buf;
	cout << buf << endl;

	cin.unget(); // 마지막에 읽은 것을 버퍼에 넣어버린다.

	cin >> buf;
	cout << buf << endl;

	cin.putback('A');	// 원하는 글자를 버퍼에 넣는다.

	cin >> buf;
	cout << buf << endl;


	return 0;
}