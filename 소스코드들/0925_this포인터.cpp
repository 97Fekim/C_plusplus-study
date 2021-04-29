#include <iostream>

using namespace std;

/* 예제1 */
//class Calc
//{
//private:
//	int m_value;
//
//public:
//	Calc(int init_value)
//		: m_value(init_value)
//	{}
//
//	Calc& add(int value) { m_value += value; return *this; }
//	Calc& sub(int value) { m_value -= value; return *this; }
//	Calc& mult(int value) { m_value *= value;  return *this; }
//
//	void print()
//	{
//		cout << m_value << endl;
//	}
//};
//
//int main()
//{
//	Calc cal(10);
//
//	cal.add(3).sub(1).mult(2).print();
//	
//	// 위의 state는 아래와 동일하다.
//
//	Calc& temp1 = cal.add(3);
//	Calc& temp2 = temp1.sub(1);
//	Calc& temp3 = temp2.mult(2);
//	temp3.print();
//
//
//	return 0;
//}




/* 예제2 */
class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		this -> setID(id);
		
		cout << this << endl;
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }

};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(748);
	s2.setID(4896);


	cout << s1.getID() << endl;
	cout << s2.getID() << endl;


	return 0;
}