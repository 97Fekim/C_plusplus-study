#include<iostream>
#include<fstream>
#include<string>


using namespace std;

//
//int findFirstChar(const char* string, char ch)
//{
//	for (std::size_t index = 0; index < strlen(string); ++index)
//		if (string[index] == ch)
//			return index;
//	return -1;
//}
//
//
//double divide(int x, int y, bool& success)
//{
//	if(y == 0)
//	{
//		success = false;
//		return 0.0;
//	}
//
//	return static_cast<double>(x) / (y);
//}
//
//
//int main()
//{
//	bool success;
//	double result = divide(5, 3, success);
//
//	if (!success)
//		std::cerr << "An error occurred" << std::endl;
//	else
//		std::cout << "Result is" << result << std::endl;
//
//	std::ifstream input_file("temp.txt");
//	if (!input_file)
//		std::cerr << "Cannot open file" << std::endl;
//
//
//	return 0;
//}


int main()
{
	// 예외처리는 try,catch,throw 로 나뉜다.
	double x;
	cin >> x;

	/* 문제가 생길 수 있는 부분. */
	try
	{
		if (x < 0.0)
			throw std::string("Negative input");

		/* 문제가 없는 부분 */
		cout << std::sqrt(x) << endl;
	}

	catch (std::string error_message)
	{
		cout << error_message << endl;
	}


	return 0;
}