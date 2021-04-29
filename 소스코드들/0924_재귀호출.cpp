#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	
	if(count > 0)
		countDown(count - 1);
}

int main()
{
	countDown(8);

	return 0;
}