#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n = 0;
	cout << "Программа помогает вам понять, есть ли в двузначном натуральном числе цифра 3" << endl << "Введите двузначное n = ";
	cin >> n;

	if (n > 9 && n < 100){
		if (n / 10 == 3 || n % 10 == 3) {
			cout << "Есть!" << endl; 
		} else {
			cout << "Нету!" << endl;
		}
	} else { 
		cout << "Число не двузначное!" << endl;
	}
	system("pause");
	return 0;
}
