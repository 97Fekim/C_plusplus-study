#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;

	cin >> x >> y;

	int op = 0 ;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;


	/* 정적 바인딩 */
	/*int result;

	switch (op)
	{
	case 0: result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	case 2: result = multiply(x, y); break;
	}

	cout << result << endl;*/



	/* 동적 바인딩 */
	/* func_ptr의 주소는 런타임에 결정 */
	int (*func_ptr)(int, int) = nullptr;

	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	case 2: func_ptr = multiply; break;
	}

	cout << func_ptr(x, y) << endl;

	return 0;

}