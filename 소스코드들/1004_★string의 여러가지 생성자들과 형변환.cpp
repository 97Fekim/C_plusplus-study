#include <iostream>
#include <string>
#include <vector>
#include <sstream>

/* 입력을 string으로 받아버리는 함수 */
template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;
	return osstream.str();
}


template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}




int main()
{
	/* 예제1 */
	//std::vector<char> vec;

	//for (auto e : "Today is a good day.")
	//	vec.push_back(e);
	//
	//const char* my_string = "my string";
	////std::string my_string("my string");

	//std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));

	//std::cout << my_string << std::endl;
	//std::cout << second_string << std::endl;


	/* 예제2 */
	std::string my_str("Hello");
	std::cout << my_str << std::endl;

	double d;

	if (FromString(my_str, d))
		std::cout << d << std::endl;
	else
		std::cout << "Cannot convert string to double" << std::endl;

	std::cout << my_str << std::endl;

	//my_str += std::to_string(123);

	//float f = std::stof(my_str);



	//std::cout << f << std::endl;


	return 0;
}