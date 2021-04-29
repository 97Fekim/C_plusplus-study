#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	///* +기호를 추가해서 출력해준다 */
	//cout.setf(std::ios::showpos);
	//cout << 108 << endl;

	
	///* +기호를 제거해서 출력해준다 */
	//cout.unsetf(std::ios::showpos);
	//cout << 109 << endl;

	
	///* 10진수모드를 끄고 */
	//cout.unsetf(std::ios::dec);
	///* 16진수모드로 출력 */
	//cout.setf(std::ios::hex);
	//cout << 108 << endl;


	///* 10진수모드를 끄지 않고, 16진수모드로 출력을 세팅 */
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