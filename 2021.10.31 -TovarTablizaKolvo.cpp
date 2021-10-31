#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	// »значальна€ цена, нова€ цена, кол-во, временное кол-во
	double cena, icn;
	int kolvo, ik = 1;

	cout << "≈сть некоторый товар с некоторой ценой, таблица показывает цену определенного количества товара" << endl;
	cout << "¬ведите цену товара в рубл€х (может быть в виде дес€тичной дроби) = ";
	cin >> cena;
	cout << "¬ведите количество этого товара = ";
	cin >> kolvo;
	system("pause");

	for (double ic = icn = cena; ik <= kolvo; icn+=ic) {
		cout << ik << " шт. = " << icn << " руб." << endl;
		ik++;
	}

	system("pause");
	return 0;
}
