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


/* Child class는 Mother class의 모든것을 사용할 수 있다. */
class Child : public Mother
{
private:
	double m_d;

public:
	/* 보통 부모class를 사용하는 이유는 함께 사용하려고 만든다.
	   그래서 생성자도 보통 같이 초기화를 해주는 식이다. */
	Child(const int& i_in=3, const double& d_in=5.0)
		:Mother(i_in),m_d(d_in)		// 아름다운 방법!
		//: m_i(i_in), m_d(d_in)	// Child 클래스가 생성이 될때 메모리가 없다는 뜻.
	{
		Mother::setValue(i_in);
		m_d = d_in;
		cout << "construct in child" << endl;
	}


	void setValue(const int& i_in, const double& d_in)
	{
		//m_i = i_in;
		Mother::setValue(i_in);		// 그냥 이렇게 쓰는게 속편하다.
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

	// Child class가 호출이 될때 Mother class의 생성자도 같이 호출한다.
	Mother mother(1024);		
	mother.setValue(1024);		
	cout << mother.getValue() << endl;

	Child child(1024,128);

	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;

	return 0;
}