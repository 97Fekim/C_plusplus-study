#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Friend
{
public:		// access specifier (public, private, protected)
	string  m_name;
	string  m_address;
	int		m_age;
	double  m_height;
	double  m_weight;

	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " " << m_height << " "
			<< m_weight << endl;
	}

};


int main()
{
	// instanciation ���⼭ ksc�� Friend��� class�� instance��� �����Ѵ�.
	Friend ksc{"ksc","dj",24,172,63};	

	ksc.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	return 0;
}