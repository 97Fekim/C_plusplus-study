#include "Cents.h"

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}


int main()
{

	std::cout << getMax(1, 2) << std::endl;
	std::cout << getMax(3.14, 1.592) << std::endl;
	std::cout << getMax(1.0f, 20.5f) << std::endl;
	std::cout << getMax('a', 'b') << std::endl;

	/* 부등호 operator가 구현이 되어있지 않아서 출력이 안된다. */
	std::cout << getMax(Cents(5), Cents(9)) << std::endl;

	return 0;
}