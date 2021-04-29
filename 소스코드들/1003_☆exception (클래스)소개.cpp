#include <iostream>
#include <exception>
#include <string>

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override	// noexcept는 써주자
	{
		return "Custom exception";
	}

};



int main()
{
	try
	{
		/*std::string s;
		s.resize(-1);*/
		
		// 이렇게 에러를 던져도 된다.
		//throw std::runtime_error("Bad thing happened");

		throw CustomException();

	}
	
	catch (std::length_error& exception)
	{
		std::cerr << "Length_Error" << std::endl;
		std::cerr << exception.what() << std::endl;
	}

	catch (std::exception& exception)
	{
		std::cout << typeid(exception).name() << std::endl;
		std::cerr << exception.what() << std::endl;
	}

	return 0;
}