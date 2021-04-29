#include <iostream>

using namespace std;


// �Է����� ������ parameter�� ��κ� const�� �տ� �ٿ��ִ�.
// parameter�� &�� ���ָ� sin_out, cos_out�� ���� �ٲ��� �ʴ´�.!!
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