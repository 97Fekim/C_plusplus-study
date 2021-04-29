#include "MyArray.h"

int main()
{
	// template 에는 <자료형>을 붙여줘야 쓸 수 있다. 아래처럼
	/*MyArray my_array(10);*/

	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = 10.7 * i;

	my_array.print();

	return 0;
}