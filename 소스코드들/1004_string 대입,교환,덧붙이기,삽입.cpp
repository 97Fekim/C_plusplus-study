#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("one");
	string str2("two");


	/* 복붙하기 */
	//str2 = str1;
	//str2 = "two";
	//str2.assign("two").append("three");	// append 는 덧붙인다는 뜻
	//str2.append("four");


	/* 스왑하기 */
	/*cout << str1 << " " << str2 << endl;
	std::swap(str1, str2);
	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	cout << str1 << " " << str2 << endl;*/


	/* 기타 append 활용 */
	/*str1.append("three");
	str1 += "three";
	str1 = str2 + "four";*/


	return 0;
}