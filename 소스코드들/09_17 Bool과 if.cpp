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
	

	// 부등호 괄호는 to변환의 대상 타입
	cout << static_cast<char>(65) << endl;		// 65를 char로 캐스팅
	cout << static_cast<int>('A') << endl;		// 'A'를 int로 캐스팅

	char c1(65);

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	return 0;

}