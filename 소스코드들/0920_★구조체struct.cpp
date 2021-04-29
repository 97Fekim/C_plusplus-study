#include <iostream>
#include <string>


/* 예제 1 */
using namespace std;

struct Person 
{
	double height;
	float  weight;	// 사람에 대한 정보
	int	   age;
	string name;

	void printPerson()
	{
		cout << height << " " << weight <<
			" " << name << " " << age << endl;
	}
};


struct Family
{
	Person me, mom, dad;
};


Person getMe()
{
	Person me{ 2.0,100.0,20,"fekim" };

	return me;
}


int main()
{
	Person me_from_func = getMe();
	me_from_func.printPerson();
	
	return 0;
}


/* 예제2 */

//using namespace std;
//
//struct Employee		// * 2 + 4 + 8 = 14 (x)    * 2 + (2) + 4 + 8 = 16 (o)
//{
//	short  id;		// 2 bytes
//	int	   age;		// 4 bytes
//	double wage;	// 8 bytes
//};
//
//int main()
//{
//	Employee emp1;
//
//	cout << sizeof(Employee) << endl;
//
//	return 0;
//}