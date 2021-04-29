#include <iostream>
#include <string>
#include <array>
using namespace std;


//class Simple
//{
//private:
//	int m_id;
//
//public:
//	Simple(const int& id_in)
//		: m_id(id_in)
//	{
//		cout << "Constructor" << m_id << endl;
//	}
//
//	~Simple()
//	{
//		cout << "Destructor" << m_id << endl;
//	}
//};


//int main()
//{
//	Simple *s1 = new Simple(0);
//	Simple s2(1);
//
//	delete s1;
//
//	return 0;
//}


class IntArray 
{
private:
	int* m_arr = nullptr;
	unsigned int m_length = 0;

public:
	IntArray(const unsigned int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}

	int size() { return m_length; }

	~IntArray()
	{
		if(m_arr != nullptr) delete[] m_arr;
	}

};

int main()
{
	while (1)
	{
		IntArray my_int_arr(10000);
	}
	return 0;
}