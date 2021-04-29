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
	/* ������(���ڿ��� �޾Ƽ� �� ���̸�ŭ �����޸� �Ҵ�) */
	MyString(const char* source = "")
	{
		assert(source);

		/* �Է� ���ڿ��� ���̸� m_length�� �����Ѵ�. */
		m_length = std::strlen(source) + 1;
		
		/* �����޸��� �ּҸ� m_data�� �޴´�. */
		m_data = new char[m_length];

		/* ������ �����޸𸮿� source�� ������ �ִ´�. */
		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}


	/* �������� */
	MyString& operator = (const MyString& source)
	{
		
		this->m_data = source.m_data;
		this->m_length = source.m_length;

		cout << "Assignment operator" << endl;

		// �ڱ⺹�� ����(���α׷����忡���� ������ �� �� �ֵ�.)
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


	/* �������� */
	MyString(const MyString& source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			// �޸𸮸� �ٽ� �Ҵ�޴´�.(��������)
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	/* �Ҹ��� */
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

	/* ����1 */
	//cout << (int*)hello.m_data << endl;
	//cout << hello.getString() << endl;

	//{
	//	/* copy��� Ŭ������ �����ǰ�, hello�� �����
	//	   �����Ҵ� �޸𸮴� copy�� ������ �ȴ�.
	//	   �� ��Ȳ���� copy�� �Ҹ��� �Ǹ鼭, hello�� �ּ�
	//	   ���� �Ҹ��� �Ǿ� scope�� ����� hello���� �ּ�
	//	   �� �Ҿ������ �Ǿ���. */
	//	MyString copy = hello;
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}

	//cout << hello.getString() << endl;

}



			
													
