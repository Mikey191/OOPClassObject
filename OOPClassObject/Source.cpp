// 2.������� ����� �������� ����� ������ ����. �������� ��������� ������,
// ������� ���������� ������� � ������ ����� �����.
// �������� � ������������������ 2 ������� ����� ������.
// ��� ����� �������� �������� �� ����� ������������ �����, � ��� �� ������� � ������.
// 
// 3.��� ������ �� ����� ���������� �� ������� 2 �������� ��������� ���������,
// ������� � �������� ��������� �������� ������
// 
// 4.�������� ����� �� ������� 2 ���, ��� �� �������� ����� ����� ���� ������ � 
// ��������� ������ ����� ������
// 
// 5.�������� ����� �� ������� 4 ���, ��� �� ������� � ������ ������������� � ������ 
// ������� ��������� �����. ��� ����� �������� 2 �������� ����,
// � ������� ������������ ������� � ������ ���������� ��� �����
// ��� ���������� �������� ����� �����
//

#include<iostream>
#include <math.h>//��� ������������� ������� sqrt()
using namespace std;

class Pointer {
	int x;
	int qvad;
	double sqr;
public:
	void SetX(int x1);
	int GetX();
	int Qvd(int x1);
	double Sqr(int x1);
};

void Pointer::SetX(int x1)
{
	x = x1;
}

int Pointer::GetX()
{
	return x;
}

int Pointer::Qvd(int x1)
{
	x1 = x;
	qvad = x1 * x1;
	return qvad;
}

double Pointer::Sqr(int x1)
{
	x1 = x;
	sqr = sqrt(x1);
	return sqr;
}

void printP(Pointer p)
{
	cout << "x = " << p.GetX() << endl;
	cout << "qvadrat = " << p.Qvd(p.GetX()) << endl;
	cout << "sqrt = " << p.Sqr(p.GetX()) << endl;
}


int main()
{
	Pointer object1;
	Pointer object2;
	object1.SetX(9);
	object2.SetX(15);

	printP(object1);

	cout << endl;

	printP(object2);

	return 0;
}