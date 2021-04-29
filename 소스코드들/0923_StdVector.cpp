#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> array = { 1,2,3,4,5 };

	array.resize(7);

	for (auto& itr : array)
		cout << itr << " ";

	cout << endl;

	cout << array[1] << endl;
	cout << array.at(1) << endl;
	cout << array.size() << endl;


	return 0;
}