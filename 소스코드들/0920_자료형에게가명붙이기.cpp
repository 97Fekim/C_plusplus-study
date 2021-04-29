#include <iostream>
#include <vector>
#include <cstdint>


//int main()
//{
//	//typedef double distance_t;
//	typedef float distance_t;
//	//std::int8_t(97);
//
//	double		my_distance;	// 컴파일러 입장에선 똑같다
//	distance_t	home2work;
//	distance_t	home2school;
//
//
//	return 0;
//}

int main()
{
	using namespace std;

	// typedef vector<pair<string, int> > pairlist_t;

	using pairlist_t = vector<pair<string, int> >;

	//vector<pair<string, int> >는 자료형으로 보면된다.
	pairlist_t pairlist1;	
	pairlist_t pairlist2;

}