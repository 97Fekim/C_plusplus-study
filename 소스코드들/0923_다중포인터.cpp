#include <iostream>

int main()
{
	using namespace std;
	
	const int rows = 3;
	const int cols = 5;

	const int s2da[rows][cols] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int** matrix = new int* [rows];

	for (int r = 0; r < rows; r++)
		matrix[r] = new int[cols];
	
	int n = 0;;

	for (int r = 0; r < rows; r++)
	{
		for (int c = 0; c < cols; c++)
		{
			matrix[r][c] = n++;
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	for (int r = 0; r < rows; ++r)
		delete[] matrix[r];
	
	delete matrix;



	/*int* matrix2 = new int[rows * cols];

	int n1 = 0;;
	for (int r = 0; r < rows; r++)
		for (int c = 0; c < cols; c++)
			matrix[c + cols * r] = n1++;



	delete[] matrix2;*/




	return 0;
}
