#include <iostream>
#include <cassert>
#include <initializer_list>


using namespace std;


class IntArray 
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr;

public:

	/* 생성자 */
	IntArray(unsigned length)
		: m_length(length)
	{
		m_data = new int[length];
	}

	/* 초기화와 함께하는 생성자 */
	IntArray(const std::initializer_list<int>& list)
		: IntArray(list.size())
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count] = element;
			++count;
		}
	}

	/* 소멸자 */
	~IntArray()
	{
		delete[] this->m_data;
	}

	/* 배열 출력 */
	friend ostream& operator << (ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}

};



int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5]{ 1,2,3,4,5 };

	auto il = { 10,20,30 };

	IntArray int_array{ 1,2,3,4,5 };
	cout << int_array << endl;


	return 0;
}