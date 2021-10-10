#include <iostream>
using namespace std;

int main ()
{
	int a = 0, b = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl;

	cout << "a > b : " << (a > b) << endl; // Больше
	cout << "a < b : " << (a < b) << endl; // Меньше
	cout << "a >= b : " << (a >= b) << endl; // Больше ИЛИ Равно
	cout << "a <= b : " << (a <= b) << endl; // Меньше ИЛИ Равно
	cout << "a = b : " << (a == b) << endl; // Равно
	cout << "a != b : " << (a != b) << endl; // НЕ Равно
	cout << "a && b : " << (a && b) << endl; // И
	cout << "a || b : " << (a || b) << endl << endl; // ИЛИ

	cout << "a < b || b < a : " << ( a < b || b < a) << endl; // Пример

	// Дощь
	bool isRaining = true; // Капает ли дощь?
	bool isOpen = false; // Зонтик 
	bool needOpen = !isOpen && isRaining; // Открывать ли зонтик?
	cout << "Otkrivat' Li Zont? " << needOpen << endl;

	system("pause");
	return 0;
}
