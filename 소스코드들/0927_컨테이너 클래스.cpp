#include <iostream>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	// Constructors
	IntArray(unsigned int length_in)
	{
		m_length = length_in;
		m_data = new int[length_in];
	}

	// initialize()
	IntArray(const std::initializer_list<int>& list)
		: IntArray(list.size())
	{
		int count = 0;
		for (auto& elem : list)
		{
			m_data[count] = elem;
			count++;
		}
	}
	
	// reset()
	void reset()
	{
		for (int i = 0; i < m_length; ++i)
			m_data[i] = 0;
	}

	//// resize()
	//void resize(const int& size_in)
	//{
	//	int *temp = new int[size_in];
	//	
	//	for (int i = 0; i < size_in; ++i)
	//	{
	//		if (i == m_length)break;
	//		temp[i] = m_data[i];
	//	}

	//	m_data = temp;

	//}

	// insertBefore(const int& value, const int &ix)
	// remove(const int& ix)
	// push_back(const int& value)

	// Ãâ·Â
	friend std::ostream& operator << (ostream& out, const IntArray& Array)
	{
		
		for(int i = 0; i < Array.m_length; ++i)
			out << Array.m_data[i] << " ";

		return out;
	}

	// Destructors
	~IntArray()
	{
		delete[] m_data;
	}

};


int main()
{
	 IntArray my_arr{1,3,5,7,9,7,8};
	// my_arr.insertBefore(10,1);	// 1,10,3,5,7,9
	// my_arr.remove(3);			// 1,10,3,7,9
	// my_arr.push_back(13);		// 1,10,3,7,9,13
	 
	 cout << my_arr << endl;

	 cout << endl;

	 my_arr.reset();

	 cout << my_arr << endl; 

	return 0;
}