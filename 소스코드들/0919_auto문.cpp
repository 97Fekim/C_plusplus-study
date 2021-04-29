#include <iostream>

/* ->를 쓴 함수는 가독성이 좋다 */
auto add(int x, int y) -> int;

auto add(int x, int y) -> int
{
	return x + (double)y;
}

int main()
{
	using namespace std;
	auto a = 123;
	auto d = 123.0;
	auto c = 1 + 2.0;
	auto result = add(1, 2);

	cout << sizeof(a) << sizeof(d) << sizeof(c) << endl;
}