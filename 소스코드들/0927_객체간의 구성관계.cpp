#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Samson",Position2D(0,0));
	//mon1.m_location;
	cout << mon1 << endl;

	// �̷��� Monster�� Position2D�� ����ϴ� ���踦
	// composition ������ �����Ѵ�.


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