#include <iostream>
using namespace std;



class Something
{
public:
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;		// inner class
		}
	};

private:
	
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	//Something()
	//	: m_value(123), s_value(1024)	// static ������ �����ڷ� �Ұ����ϴ�.
	//{}


	static int getValue()
	{
		/* static�Լ������� ������ �������� ������ �����ϴ�. */
		/* s_value�� �������� �޸𸮿� ��ġ�� �ֱ� ������ ������ �����Ѱ� */
		return s_value;
		//return this->m_value;	
	}

	int temp()
	{
		return this->s_value;
	}

};

int Something::s_value = 1024;

/* Something class ���� _init�̶�� class Ÿ����, 
Something class �� s_initializer �����ڰ� �����. */
Something::_init Something::s_initializer;


int main()
{
	// s1�� ���ǵǱ� ������ ������ ������ �����ϴ�. (static�̹Ƿ�)
	cout << Something::getValue() << endl;

	Something s1;

	/* �Լ��� ��ü�� �ν��Ͻ��� �������� �ʴ�. */
	//int (Something:: * fptr1)() = &(s1.temp);		// x	�Լ��� �ϳ���!
	int (Something:: * fptr1)() = &Something::temp;	// o

	cout << (s1.*fptr1)() << endl;;

	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	return 0;
}