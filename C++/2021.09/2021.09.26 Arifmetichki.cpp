#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	// Спиритизм
	/*
	double x = 5.125;
	double y = 7.6325;
	x = x - (int)x;
	y = (int)(y * 100);
	y = y / 100;
	y = y - (int)y;
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	*/


	// Накладываем чары на буковки
	/*
	x*=2;
	cout << x << endl;
	char ch = 'g';
	cout << ch << endl << (int)ch << endl; 
	*/



	// Результатусы
	/*
	double res = (int)2.5;
	cout << res << endl;
	res = pow((double) 2,3);
	cout << res << endl; 
	*/

	/* 
	double x = 0.6;
	cout << ((2 * x + 4) * 4 * x - 3) / ((x - 4) * x * x) << endl;
	double res = pow(2.0, 5);
	cout << res << endl; 
	*/



	// Приколюхи c "c+-" и другие операции
	/* 
	int b = 1, c = 0;
	int d = 2, e = 3;
	d = ++e;
	cout << d << endl << e << endl << endl;
	d = e++;
	cout << d << endl << e << endl << endl;

	b/= 2+3;
	c++;
	cout << c << b << endl;
	b = ++b * 2;
	c--;
	cout << c << b << endl; 
	*/



	// Смена значений двух переменных
	/*
	int a = 3, b = 4;
	int tmp = a;
	a = b;
	b = tmp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl; 
	*/

	// Произведение разрядов трехзначного числа 
	/*
	int number = 999;
	int ed = number % 10;
	int des = number / 10 % 10;
	int sot = number / 100 % 10;
	cout << ed * des * sot << endl; 
	*/



	// Обнуление десятка в числе  
	/* 
	int num = 123;
	int n = num / 10 % 10 * 10;
	cout << num - n << endl; 
	*/



	// Импровизированный калькулятор для Restaraunt
	/*
	LOsHka = VilkaDurilka = Zatochka = Supnica = TarelkaGorelka = Ghosti;
	int LOsHka, VilkaDurilka, Zatochka, Supnica, TarelkaGorelka, Ghosti;
	cout << "kol-vo gostej = ";
	cin >> Ghosti;

	cout << "kol-vo LOsHek = " << LOsHka << endl;
	cout << "kol-vo VilokDurilok = " << VilkaDurilka << endl;
	cout << "kol-vo Zatochek = " << Zatochka << endl;
	cout << "kol-vo Supnic = " << Supnica << endl;
	cout << "kol-vo TarelokGorelok = " << TarelkaGorelka << endl;
	cout << "------------------------------" << endl;
	cout << "kol-vo vseh stolovyh priborov = " << LOsHka + VilkaDurilka + Zatochka + Supnica + TarelkaGorelka << endl; 
	*/


	// Мини калькулятор
	/* 
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl; 
	*/

	system("pause"); 
	return 0; 
}
