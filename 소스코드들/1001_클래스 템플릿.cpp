#include "MyArray.h"

int main()
{
	// template ���� <�ڷ���>�� �ٿ���� �� �� �ִ�. �Ʒ�ó��
	/*MyArray my_array(10);*/

	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = 10.7 * i;

	my_array.print();

	return 0;
}