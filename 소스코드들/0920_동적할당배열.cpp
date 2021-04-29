#include<iostream>

using namespace std;

int main()
{
	int length;

	std::cin >> length;

	int* array = new int[length] {1,2,3,4,5,6};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i)
	{
		std::cout << (uintptr_t) & array[i] << endl;
		std::cout << array[i] << endl;
	}

	delete[] array;

	return 0;
}
