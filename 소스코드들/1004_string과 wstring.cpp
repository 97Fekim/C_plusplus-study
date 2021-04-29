#include <string>
#include <cstddef>
#include <iostream>
#include <locale>

int main(void)
{
	/*{
		char* strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "hello");
		std::cout << strHello << std::endl;
	}*/

	{
		std::string string;
		std::wstring wstring;

		// wchar_t는 data size가 큰 문자이다. ex) unicode
		wchar_t wc;
	}

}
