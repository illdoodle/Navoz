#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	// Изначальная цена, новая цена, кол-во, временное кол-во
	double cena, icn;
	int kolvo, ik = 1;

	cout << "Есть товар с некоторой ценой, таблица показывает общую сумму кол-ва товара" << endl;
	cout << "Введите цену товара в рублях (может быть в виде десятичной дроби) = ";
	cin >> cena;
	cout << "Введите количество этого товара = ";
	cin >> kolvo;
	system("pause");

	for (double ic = icn = cena; ik <= kolvo; icn+=ic) {
		cout << ik << " шт. = " << icn << " руб." << endl;
		ik++;
	}

	system("pause");
	return 0;
}
