// 2.Создать класс хранящий число любого типа. Напишите публичные методы,
// которые возвращают квадрат и корень этого числа.
// Создайте и проинициализируйте 2 объекта этого класса.
// Для обоих объектов выведите на экран оригинальное число, а так же квадрат и корень.
// 
// 3.для вывода на экран информации из задания 2 напишите отдельную процедуру,
// котороя в качесвте параметра получает объект
// 
// 4.измените класс из задания 2 так, что бы хранимое число можно было задать и 
// прочитать только через методы
// 
// 5.изменить класс из задания 4 так, что бы квадрат и корень расчитывались в момент 
// задания хранимого числа. Для этого добавьте 2 закрытых поля,
// а функции возвращающие квадрат и корень пределайте так чтобы
// они возвращали значения новых полей
//

#include<iostream>
#include <math.h>//для использования функции sqrt()
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