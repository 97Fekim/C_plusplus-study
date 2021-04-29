#include <iostream>
#include <cassert>

using namespace std;


class IntList
{
private:
	int m_list[10] = { 1,2,3,4,5,6,7,8,9,10 };

public:

	/* 예제2 */

	int& operator [] (const int index)
	{
		assert(index >= 0);		// 무시무시한 런타임 에러를 막으려면
		assert(index <= 10);	// 이런 안전장치가 필요하다.
		return m_list[index];		
	}
	
	// const의 데이터를 처리하기 위한 함수
	const int& operator [] (const int index) const
	{
		assert(index >= 0);		// 무시무시한 런타임 에러를 막으려면
		assert(index <= 10);	// 이런 안전장치가 필요하다.
		return m_list[index];
	}

	
	/* 예제1 */
	/*void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}*/
};


int main()
{
	/* 예제1 */
	/*IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getList()[3] = 10;
	cout << my_list.getList()[3] << endl;*/


	/* 예제2 */
	const IntList my_list;
	cout << my_list[3] << endl;

	IntList* list = new IntList;


	(*list)[3] = 10;	// OK


	return 0;
}

