#include<iostream>

using namespace std;


/* 持失引 社瑚 */
int main()
{
	//int* ptr = new int{ 7 };

	int* ptr = new (std::nothrow)int{ 7 };


	delete ptr;
	ptr = nullptr;

	if(ptr != nullptr)


	cout << ptr << endl;
	cout << *ptr << endl;
	
	return 0;
}
