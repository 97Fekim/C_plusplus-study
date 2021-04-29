#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string my_str("abcdefg");

	/* 예제1 */
	//cout << my_str[0] << endl;
	//cout << my_str[3] << endl;

	//my_str[4] = 'Z';

	//try 
	//{
	//	/* [] 이경우에는 예외처리를 해주지 않는다 */
	//	//my_str[100] = 'X';	// 퍼포먼스가 중요한 경우

	//	/* at을 써줘야 throw를 해준다 */
	//	my_str.at(100) = 'X';	// 안정성이 중요한 경우
	//}

	//catch (std::exception& e)
	//{
	//	cout << e.what() << endl;
	//}

	/* 예제2 */
	//cout << my_str.c_str() << endl;

	///* c_str로 가져오면, null character를 붙여준다 */
	//const char* arr = my_str.c_str();
	//cout << my_str.c_str()[6] << endl;	// c_str() = data() 이다.
	//cout << my_str.data()[6] << endl; 

	//cout << (int)arr[6] << endl;
	//cout << (int)arr[7] << endl;

	/* 예제3 */
	char buf[20];

	my_str.copy(buf, 5, 1);

	buf[5] = '\0';

	cout << buf << endl;

	return 0;
}