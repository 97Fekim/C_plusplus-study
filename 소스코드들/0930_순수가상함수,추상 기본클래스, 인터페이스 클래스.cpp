#include <iostream>
#include <string>

using namespace std;


/* ���������Լ�, �߻�⺻Ŭ���� ���� */
//class Animal
//{
//protected:
//	string m_name;
//
//public:
//	Animal(std::string name)
//		: m_name(name)
//	{}
//
//public:
//	string getNname() { return m_name; }
//
//	/* �̰��� pure virtual function �̶�� �θ���. */
//	virtual void speak() const = 0;
//
//};
//
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//		: Animal(name)
//	{}
//
//	void speak() const
//	{
//		cout << m_name << " Meow" << endl;
//	}
//
//
//};
//
//
//class Cow : public Animal
//{
//public:
//	Cow(string name)
//		: Animal(name)
//	{}
//
//	virtual void speak() const
//	{
//		cout << m_name << " " << "Mooo" << endl;
//	}
//};
//
//
//
//int main()
//{
//	/* �߻� �⺻ Ŭ����*/
//	//Animal ani("Hi");
//
//	Cow cow("hello");
//
//	cow.speak();
//
//	return 0;
//
//}


class IErrorLog
{
public:
	/* ���������Լ� */
	virtual bool reportError(const char* errorMessage) = 0;

	virtual ~IErrorLog() {}
};


class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};


class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}

};

void doSomething(IErrorLog& log)
{
	log.reportError("Runtime Error!");
}


int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}