#include <iostream>

using namespace std;

void my_fuction(void)
{


}


int main()
{
	
	// 데이터의 타입(int,char etc..)이 다르더라도, 
	// 그 데이터들의 포인터의 규격은 모두 같다. 1byte,,
	// 그래서 어떤 자료형을 갖는 변수더라도, 포인터의 규격은
	// 왓다리 갔다리 할 수 있는데 그것을 void 포인터로도 변경 가능하다는 것이다.
	int i = 123;
	float f = 123.456f;
	
	void* my_void;

	my_void = (void*)&i;
	my_void = (void*)&f;

	cout << my_void << endl;

	return 0;

}