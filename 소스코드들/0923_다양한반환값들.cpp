#include <iostream>

using namespace std;

int& getValue(int x)
{
	int value = x * 2;
	return value;
}


//int* allocateMemory(int size)
//{
//	return new int[size];
//}



int main()
{
	int value = getValue(5);

}

// 두개 이상을 받을 땐 튜플을 사용ㄱㄱ