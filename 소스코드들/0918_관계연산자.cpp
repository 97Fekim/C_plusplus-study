#include <iostream>

using namespace std;


// 입력으로 들어오는 parameter는 대부분 const가 앞에 붙여있다.
void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180;
	double radians = degrees * pi;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	double sin(0.0);
	double cos(0.0);




}