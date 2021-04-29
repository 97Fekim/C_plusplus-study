#include <algorithm>
#include <vector>
#include <iostream>
#include <list>

int main()
{
	using namespace std;

	list<int> container;

	for (int i = 0; i < 10; ++i)
		container.push_back(rand());
	
	auto itr = min_element(container.begin(), container.end());
	cout << *itr << endl;
	cout << endl;

	itr = max_element(container.begin(), container.end());
	cout << *itr << endl;
	cout << endl;

	itr = find(container.begin(), container.end(), 29358);
	container.insert(itr, 128);
	
	for (auto& e : container)
		cout << e << " ";
	cout << endl;

	// sort(container.begin(), container.end());
	// list�� ���ø� �ȿ� sort �Լ��� ������ �ִ�.
	container.sort();

	for (auto& e : container)
		cout << e << " ";
	cout << endl;

	// reverse(container.begin(), container.end());
	// list�� ���ø� �ȿ� reverse �Լ��� ������ �ִ�.
	container.reverse();

	for (auto& e : container)
		cout << e << " ";
	cout << endl;

	return 0;
}
