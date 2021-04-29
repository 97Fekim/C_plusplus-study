#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Samson",Position2D(0,0));
	//mon1.m_location;
	cout << mon1 << endl;

	// 이렇게 Monster가 Position2D를 사용하는 관계를
	// composition 관계라고 정의한다.


	Monster mon2("Parsival", Position2D(0, 0));
	//mon2.m_loacation;
	cout << mon2 << endl;


	// game loop
	while (1)
	{
		//event
		mon1.moveTo(Position2D(5,3));
		cout << mon1 << endl;
	}

}