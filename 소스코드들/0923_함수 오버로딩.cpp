#include<iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

int main()
{
	cout << add(1, 2) << endl;
	cout << add(3.0, 4.0) << endl;

	return 0;

}

/* �Լ��� �̸��� ���Ƶ� �Ű������� �ٸ��� �ٸ� �Լ��̴�.
   �����Ϸ��� �˾Ƽ� ��Ī�� �����ش�. */