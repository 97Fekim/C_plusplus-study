#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

int main()
{
	//vector<int> container;
	//list<int> container;
	//set<int> container;
	map<int, char> container;


	for (int i = 0; i < 10; ++i)
		//container.push_back(i);
		container.insert(make_pair(i,char(i+65)));


	/*vector<int>::const_iterator itr;
	itr = container.begin();

	while (itr != container.end())
	{
		cout << *itr << " ";

		++itr;
	}
	cout << endl;*/


	/* �̷��� �Ҽ��� �־� */
	for (auto itr = container.begin(); itr != container.end(); ++itr)
		//cout << *itr << " ";
		cout << itr->first << " " << itr->second << endl;

	cout << endl;

}