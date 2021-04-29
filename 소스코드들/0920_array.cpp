#include <iostream>

using namespace std;


/* 예제1 */
struct Rectangle 
{
	int length;
	int width;
};

int main()
{
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 10;
	rect_arr[0].width = 15;

}


//enum StudentName
//{
//	a,
//	b,
//	c,
//};
//
//int main()
//{
//	int my_arr[3] = { 1,2,3 };
//
//	cout << my_arr[a] << endl;
//	cout << my_arr[b] << endl;		// 권장은 X
//	cout << my_arr[c] << endl;	
//
//	int your_arr[c] = { 1,2 };
//
//	cout << your_arr[0] << endl;
//	cout << your_arr[1] << endl;
//
//	return 0;
//}