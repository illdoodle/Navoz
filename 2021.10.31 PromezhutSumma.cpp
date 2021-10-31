#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	int sum = 0, cur;
	cout << "Программа складывает предыдущее число с новым" << endl;

	for (int i = 1; ; i++) {
		cout << "Введите " << i << " число = ";
		cin >> cur;
		sum += cur;
		cout << "Новая сумма = " << sum << endl;
	}

	system("pause");
	return 0;
}
