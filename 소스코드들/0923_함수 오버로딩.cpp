#include<iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{
	cout << add(1, 2) << endl;
	cout << add(3.0, 4.0) << endl;

	return 0;

}

/* 함수는 이름이 같아도 매개변수가 다르면 다른 함수이다.
   컴파일러가 알아서 매칭을 시켜준다. */