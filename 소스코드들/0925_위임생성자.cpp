#include <iostream>
using namespace std;

class Student
{
private:
	int		m_id;
	string  m_name;

public:
	/* 생성자가 생성자를 가져다 쓰는 것을 위임생성자 라고 한다. */
	Student(const string& name_in)
	//	: Student(0, name_in)
	{
		init(0, name_in);		// 만능함수를 만들어서 생성자에 넣는것을 추천!
	}

	Student(const int& id_in, const string& name_in)
	//	: m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}

	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(1, "Jack Jack");
	st1.print();
	Student st2("jack jack");
	st2.print();

	return 0;
}