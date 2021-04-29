#include <iostream>

using namespace std;

class Mother
{
private:
	int m_i;


public:
	Mother()
		: m_i(0)
	{
		std::cout << "constructor in mother" << std::endl;;
	}

	Mother(const int& i_in)
		: m_i(i_in)
	{
		std::cout << "constructor in mother" << std::endl;
	}


	void setValue(const int& value)
	{
		m_i = value;
	}

	int getValue()
	{
		return m_i;
	}


};


/* Child class�� Mother class�� ������ ����� �� �ִ�. */
class Child : public Mother
{
private:
	double m_d;

public:
	/* ���� �θ�class�� ����ϴ� ������ �Բ� ����Ϸ��� �����.
	   �׷��� �����ڵ� ���� ���� �ʱ�ȭ�� ���ִ� ���̴�. */
	Child(const int& i_in=3, const double& d_in=5.0)
		:Mother(i_in),m_d(d_in)		// �Ƹ��ٿ� ���!
		//: m_i(i_in), m_d(d_in)	// Child Ŭ������ ������ �ɶ� �޸𸮰� ���ٴ� ��.
	{
		Mother::setValue(i_in);
		m_d = d_in;
		cout << "construct in child" << endl;
	}


	void setValue(const int& i_in, const double& d_in)
	{
		//m_i = i_in;
		Mother::setValue(i_in);		// �׳� �̷��� ���°� �����ϴ�.
		m_d = d_in;
	}

	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}

};


class Daughter : public Mother
{

};

class Son : public Mother
{

};


int main()
{

	// Child class�� ȣ���� �ɶ� Mother class�� �����ڵ� ���� ȣ���Ѵ�.
	Mother mother(1024);		
	mother.setValue(1024);		
	cout << mother.getValue() << endl;

	Child child(1024,128);

	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}