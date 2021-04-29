#include <iostream>
#include <string>
using namespace std;


/* ����1 */
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





// ��ü�� ������ ���� const�� ���� �� �ִ°� ������ ���°� ����.
class Something	
{
public:
	int m_value = 0;

	// ���� �ٲٴ� �Լ��� const�� ���̸� ����̹Ƿ� ��Ե� �ٲ� �� ����.
	void setValue(int value) { m_value = value; }
	
	// �Լ� �̸��ڿ� const�� ���̸� �� �Լ��� �������� �ʰڴٴ� ������ �巯��.
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
	// Something ��ü�� ���� ������� something�� �ٲ� �� ����.
	const Something something;	
	//something.setValue(3);

	cout << something.getValue() << endl;	// ��µ� ������!!

	print(something);


	return 0;
}