#include <iostream>
#include <string>
using namespace std;


/* 예제1 */
//class Something
//{
//public:
//	string m_value = "default";
//
//	const string& getValue() const {
//		cout << "const version" << endl;
//		return m_value; }
//
//	string& getValue() { 
//		cout << "non-const version" << endl;
//		return m_value; }
//};
//
//int main()
//{
//	Something something;
//	something.getValue() = 10;
//
//
//	const Something something2;
//	something2.getValue();
//
//}





// 객체를 설계할 때도 const로 막을 수 있는건 무조건 막는게 좋다.
class Something	
{
public:
	int m_value = 0;

	// 값을 바꾸는 함수는 const를 붙이면 모순이므로 어떻게든 바꿀 수 없당.
	void setValue(int value) { m_value = value; }
	
	// 함수 이름뒤에 const를 붙이면 이 함수는 변경하지 않겠다는 의지를 드러냄.
	int getValue() const 
	{ 
		return m_value; 
	}
};

void print(const Something &st)
{
	cout << st.m_value << endl;

	cout << st.getValue() << endl;
}


int main()
{
	// Something 객체로 부터 만들어진 something은 바꿀 수 없음.
	const Something something;	
	//something.setValue(3);

	cout << something.getValue() << endl;	// 출력도 하지마!!

	print(something);


	return 0;
}