#include <iostream>
#include <string>

using namespace std;


/* 순수가상함수, 추상기본클래스 예제 */
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
//	/* 이것을 pure virtual function 이라고 부른다. */
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
//	/* 추상 기본 클래스*/
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
	/* 순수가상함수 */
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