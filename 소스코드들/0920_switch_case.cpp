#include <iostream>

using namespace std;


int main()
{
	int x;
	cin >> x;

	switch (x)
	{
		int a;
	case 0:
		a = 5;
		cout << a << endl;	// ��� ����,�ʱ�ȭ�� ���� ������ case��, �ʱ�ȭ�� case�ȿ���,,
		break;
	}
	

}



/* ������ case�� ���� */
//enum class Colors
//{
//	BLACK,
//	WHITE,
//	RED,
//	GREEN,
//	BLUE,
//};
//
//void printColorName(Colors color)
//{
//	switch (color)
//	{
//	case Colors::BLACK :
//		cout << "Black";
//		break;
//	case Colors::WHITE:
//		cout << "WHITE";
//		break;
//	case Colors::RED:
//		cout << "RED";
//		break;
//	case Colors::GREEN:
//		cout << "GREEN";
//		break;
//	case Colors::BLUE:
//		cout << "BLUE";
//		break;
//	default :
//		cout << "Undefined" << endl;
//		break;	
//	}
//}
//
//int main()
//{
//	Colors my_color;
//
//	my_color = Colors::GREEN;
//	my_color = Colors::RED;
//
//	
//	printColorName(my_color);
//	return 0;
//}



/* ������ case�� ����*/
//int main()
//{
//	int x;
//	cin >> x;
//	{
//		switch (x)
//		{
//		case 0:
//			cout << "Zero";
//			break;
//		case 1:
//			cout << "ONE";
//			break;
//		case 2:
//			cout << "Two";
//			break;
//		}
//
//		cout << endl;
//	}
//	return 0;
//}