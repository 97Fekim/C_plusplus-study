#include <iostream>
#include <array>
#include <functional>
using namespace std;

//int func(int x)
//{
//	return 5;
//}
//
//int goo(int x)
//{
//	return 10;
//}
//
//int main()
//{
//
//	int (*fcnptr)(int) = func;
//
//	cout << fcnptr(3) << endl;
//
//	fcnptr = goo;
//
//	cout << fcnptr(3) << endl;
//
//	return 0;
//}


bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
}


typedef bool (*check_fcn_t)(const int&);


void printNumber(const array<int, 10>& my_array, check_fcn_t check_fcn)
{	
	for (auto element : my_array)
	{
		if (check_fcn(element) == true) cout << element << " ";
	}
}


int main()
{
	std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumber(my_array,isEven);
	cout << endl;
	printNumber(my_array, isOdd);

	return 0;
}

