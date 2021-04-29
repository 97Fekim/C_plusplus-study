#include <iostream>
using namespace std;


class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;


};

/* 1) */
//class Derived : public Base
//{
//public:
//	Derived()
//	{
//		m_protected = 3;
//	}
//};


/* 2) */
//class Derived : protected Base
//{
//public:
//	Derived()
//	{
//		Base::m_public;
//		Base::m_protected;
//		Base::m_private;
//	}
//};


/* 3) */
class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		Base::m_private;
	}
};


/* private + private이면 손자 클래스에서 상속이 불가능하다. */
class GrandChild : public Derived
{
public:
	GrandChild()
	{
		Derived::m_public;

	}

};



int main()
{
	Derived derived;

	derived.m_public = 105;
	derived.m_protected = 103;
	derived.m_private = 104;

	return 0;
}