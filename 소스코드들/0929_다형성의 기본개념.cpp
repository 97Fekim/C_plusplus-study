#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }

	/* 중요! virtual이 붙으면, 부모 클래스의 함수이지만
	   자식클래스의 함수처럼 행동을 한다. !!!!!!! */
	virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow" << endl;
	}


};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Woof" << endl;
	}

};


int main()
{
	/* 예제1 */
	//Animal animal("my animal");
	//Cat cat("my cat");
	//Dog dog("my dog");

	//animal.speak();
	//cat.speak();
	//dog.speak();

	//
	//// 자식클래스의 포인터를 부모클래스의 포인터로
	//// 캐스팅해서 사용하면 자신이 부모클래스인 줄 알고
	//// 작동을 한다.
	//Animal* ptr_animal1 = &cat;
	//Animal* ptr_animal2 = &dog;

	//ptr_animal1->speak();
	//ptr_animal2->speak();

	Cat cats[] = {Cat("cat1"),Cat("cat2"),Cat("cat3"),Cat("cat4"),Cat("cat5")};
	Dog dogs[] = { Dog("dog1"),Dog("dog2") };

	for (int i = 0; i < 5; ++i)
		cats[i].speak();

	for (int i = 0; i < 2; ++i)
		dogs[i].speak();

	Animal* my_animals[] = { &cats[0],&cats[1] ,&cats[2] ,&cats[3], &cats[4],
							&dogs[0],&dogs[1] };

	for (int i = 0; i < 7; ++i)
		my_animals[i]->speak();


	return 0;

}