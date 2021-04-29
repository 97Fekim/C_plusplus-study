#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string my_str("01234567");

	/* 미리 용량을 확보한다(최소한 이정도는 잡아달라) */
	my_str.reserve(1000);

	cout << std::boolalpha;
	/* c++ 에서는 끝에 null character가 없다 */
	cout << my_str.length() << endl;
	cout << my_str.size() << endl;

	/* capacity는 상황에 따라 달라진다. */
	cout << my_str.capacity() << endl;
	cout << my_str.max_size() << endl;	// ㅗㅜㅑ..


	return 0;

}