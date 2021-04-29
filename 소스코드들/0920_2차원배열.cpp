#include <iostream>
using namespace std;


int main()
{
	const int num_rows = 3;
	const int num_cols = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_cols; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << ' ';
		}
		cout << endl;
	}

	cout << endl;

	int arr[num_rows][num_cols] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_cols; col++)
		{
			cout << arr[row][col] << '\t';
			cout << (int)&arr[row][col] << '\t';
		}
		cout << endl;
	}

	return 0;

}