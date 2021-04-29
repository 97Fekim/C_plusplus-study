#include<iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE
	};

	Color color1 = Color::BLUE;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	if(color1 == color2)
		cout << "Same color" << endl;	// 같은 enum타입끼리는 비교가 가능.

	return 0;
}