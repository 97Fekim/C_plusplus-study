#include <iostream>
#include <typeinfo>

enum Color
{
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	COLOR_SKYBLUE,
};

int main()
{
	using namespace std;

	//Color paint = COLOR_BLACK;
	//Color house(COLOR_BLUE);
	//Color apple{ COLOR_RED };

	Color my_color = COLOR_RED;

	cout << my_color << " " << COLOR_RED;

}