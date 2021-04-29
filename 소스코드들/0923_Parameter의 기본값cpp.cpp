#include<iostream>

using namespace std;

void print(int x, int y = 10, int z = 20)
{
	cout << x << " " << y  << " " << z << " " << endl;
}

int main()
{
	print(15,15,66);

	return 0;

}