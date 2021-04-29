#include <iostream>

int main()
{
	using namespace std;
	
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	//ptr = &i;
	ptr = &f;
	//ptr = &c;

	int* ptr_i = &i;

	/* 보이드포인터를 활용하려면, void -> 해당자료형 으로 형변환을 해주어야 한다.!*/
	cout << *static_cast<float*>(ptr) << endl;	 


	return 0;

}