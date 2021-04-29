#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);		// ix�� 0���� ������ ���⼭ ��Ÿ�ӿ��� �߻�. �� ix >= 0 ���� �ɷ��ִ� �����̴�.
	assert(ix <= my_array.size() - 1);
	cout << my_array[ix] << endl;
}


int main()
{
	array<int, 5> my_array{ 1,2,3,4,5 };

	printValue(my_array, 4);


	return 0;
}