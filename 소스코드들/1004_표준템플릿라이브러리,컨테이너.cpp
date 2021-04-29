#include <iostream>
#include <deque>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <vector>

using namespace std;


void sequence_containers()
{

	/* vector */
	/*{
		vector<int> vec;
		for (int i = 0; i < 10; ++i)
			vec.push_back(i);

		for (auto& e : vec)
			cout << e << " ";
		cout << endl;
		
	}*/

	/* deque */
	//{
	//	deque<int> deq;
	//	for (int i = 0; i < 10; ++i)
	//	{
	//		deq.push_back(i);

	//		/* vector는 push_front가 없다 */
	//		deq.push_front(i);
	//	}

	//	for (auto& e : deq)
	//		cout << e << " ";
	//	cout << endl;
	//}
}


void associative_containers()
{
	
	/* set */
	/*{
		set<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;

		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}*/


	/* multiset */
	/*{
		std::multiset<string> str_set;

		str_set.insert("Hello");
		str_set.insert("World");
		str_set.insert("Hello");

		cout << str_set.size() << endl;

		for (auto& e : str_set)
			cout << e << " ";
		cout << endl;
	}*/

	/* map(mapping) */
	//{
	//	std::map<char, int> map;

	//	// c를 위에 올려도 정렬되어 출력
	//	map['c'] = 50;
	//	map['a'] = 10;
	//	map['b'] = 20;

	//	cout << map['a'] << endl;

	//	map['a'] = 100;

	//	cout << map['a'] << endl;

	//	// first가 왼쪽, second가 오른쪽
	//	for (auto& e : map)
	//		cout << e.first << " " << e.second << " ";
	//	cout << endl;
	//}

	/* multimap */
	/*{
		std::multimap<char,int> map;

		map.insert(std::pair('a', 10));
		map.insert(std::pair('b', 10));
		map.insert(std::pair('c', 10));
		map.insert(std::pair('a', 10));

		cout << map.count('a') << endl;

		for (auto& e : map)
			cout << e.first << " " << e.second << endl;
		cout << endl;
	}*/
}


void container_adapters()
{
	/* Stack */
	/*{
		cout << "Stack" << endl;

		std::stack<int> stack;
		stack.push(1);
		stack.emplace(2);
		stack.emplace(3);
		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << endl;
	}*/

	/* Queue */
	/*{
		cout << "Queue" << endl;

		std::queue<int> queue;
		queue.push(1);
		queue.push(2);
		queue.push(3);

		cout << queue.front() << " " << queue.back() << endl;
		queue.pop();
		cout << queue.front() << " " << queue.back() << endl;

	}*/


	/* Priority queue (sorting을 해주는 queue이다.) */
	{
		cout << "Priority queue" << endl;

		std::priority_queue<int> queue;

		for (const int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
			queue.push(n);

		for (int i = 0; i < 10; ++i)
		{
			cout << queue.top() << endl;
			queue.pop();
		}
	}

}

int main()
{
	//sequence_containers();
	
	//associative_containers();

	container_adapters();

	return 0;
}

