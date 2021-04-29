#include <iostream>

using namespace std;

template <class T, int size>
class StaticArray_Base
{
private:
	T m_array[size];

public:
	T* getArray()
	{
		return m_array;
	}
	T& operator[](int index)
	{
		return m_array[index];
	}

	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count] << ' ';
		std::cout << endl;
	}

};

/* 상속을 받은 템플릿 */
template <class T, int size>
class StaticArray : public StaticArray_Base<T,size>
{

};

/* 상속을 받은 템플릿이 char에 대해 특수화된 템플릿 */
template <int size>
class StaticArray<char,size> : public StaticArray_Base<char, size>
{
public:
	/* 오버라이딩 된 함수. */
	void print()
	{
		for (int count = 0; count < size; ++count)
			std::cout << (*this)[count];
		std::cout << endl;
	}

};


//template<int size>
//void print(StaticArray<char, size>& array)
//{
//	for (int count = 0; count < size; ++count)
//		std::cout << array[count];
//	std::cout << endl;
//}



int main()
{
	StaticArray<int, 4> int4;

	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14>char14;
	char14[0] = 'H';
	char14[1] = 'e';

	strcpy_s(char14.getArray(), 14, "Hello, World");


	char14.print();

	return 0;
}