#include <cassert>
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;



class MyString
{
public:
	char* m_data = nullptr;
	int m_length = 0;

public:
	/* 생성자(문자열을 받아서 그 길이만큼 동적메모리 할당) */
	MyString(const char* source = "")
	{
		assert(source);

		/* 입력 문자열의 길이를 m_length에 저장한다. */
		m_length = std::strlen(source) + 1;
		
		/* 동적메모리의 주소를 m_data로 받는다. */
		m_data = new char[m_length];

		/* 생성된 동적메모리에 source의 값들을 넣는다. */
		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}


	/* 얕은복사 */
	MyString& operator = (const MyString& source)
	{
		
		this->m_data = source.m_data;
		this->m_length = source.m_length;

		cout << "Assignment operator" << endl;

		// 자기복제 방지(프로그램입장에서는 문제가 될 수 있따.)
		if (this == &source)	
			return *this;

		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
	}


	/* 깊은복사 */
	MyString(const MyString& source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			// 메모리를 다시 할당받는다.(깊은복사)
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	/* 소멸자 */
	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLenghth() { return m_length; }
};


int main()
{
	MyString hello("Hello bro~");

	MyString str1 = "hello";
	MyString str2;

	str2 = hello;

	cout <<  str1.getString() << str2.getString() << hello.getString() << endl;

	/* 예제1 */
	//cout << (int*)hello.m_data << endl;
	//cout << hello.getString() << endl;

	//{
	//	/* copy라는 클래스가 생성되고, hello에 저장된
	//	   동적할당 메모리는 copy에 공유가 된다.
	//	   그 상황에서 copy는 소멸이 되면서, hello의 주소
	//	   또한 소멸이 되어 scope를 벗어나며 hello또한 주소
	//	   를 잃어버리게 되었다. */
	//	MyString copy = hello;
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}

	//cout << hello.getString() << endl;

}



			
													
