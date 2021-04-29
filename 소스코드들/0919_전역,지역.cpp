#include <iostream>

using namespace std;


// 입력으로 들어오는 parameter는 대부분 const가 앞에 붙여있다.
// parameter에 &를 없애면 sin_out, cos_out의 값이 바뀌지 않는다.!!
void getSinCos(const double& degrees, double& sin_out, double& cos_out)
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

	getSinCos(60,sin,cos);

	cout << sin << endl;
	cout << cos << endl;

	return 0;


}