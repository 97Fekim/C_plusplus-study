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
	//	: m_value(123), s_value(1024)	// static 변수는 생성자로 불가능하다.
	//{}


	static int getValue()
	{
		/* static함수에서는 정적인 변수에만 접근이 가능하다. */
		/* s_value는 정적으로 메모리에 위치해 있기 때문에 접근이 가능한것 */
		return s_value;
		//return this->m_value;	
	}

	int temp()
	{
		return this->s_value;
	}

};

int Something::s_value = 1024;

/* Something class 안의 _init이라는 class 타입의, 
Something class 속 s_initializer 생성자가 생긴다. */
Something::_init Something::s_initializer;


int main()
{
	// s1이 정의되기 전에도 변수에 접근이 가능하다. (static이므로)
	cout << Something::getValue() << endl;

	Something s1;

	/* 함수는 객체에 인스턴스에 묶여있지 않다. */
	//int (Something:: * fptr1)() = &(s1.temp);		// x	함수는 하나뿐!
	int (Something:: * fptr1)() = &Something::temp;	// o

	cout << (s1.*fptr1)() << endl;;

	int (* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;

	return 0;
}