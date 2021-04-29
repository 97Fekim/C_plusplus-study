#include "Student.h"
#include "Teacher.h"

int main()
{
	Student std("jack jcak");
	std.setName("jack jack2");
	std.getName();


	std::cout << std.getName() << std::endl;

	
	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. k");


	std::cout << teacher1.getName() << std::endl;

	
	std.doNothing();
	teacher1.doNothing();

	
	std.study();
	teacher1.teach();

	
	Person person;
	person.setName("Mr. incredible");
	person.getName();



	return 0;
}