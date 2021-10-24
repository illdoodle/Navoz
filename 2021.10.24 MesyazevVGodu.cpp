#include <iostream>
using namespace std;

int main ()
{
	int m = 0;
	setlocale(LC_ALL, "russian");
	cout << "Ќет времени объ€сн€ть, говори сколько мес€цев в году!!!11!" << endl << "я считаю, что мес€цев в году ";
	cin >> m;
	
/*
	if (m == 12) {
		cout << "¬ам во второй класс" << endl;
	} else {
		cout << "¬ам в первый класс" << endl;
	}
*/

	switch ( m ) {
		case 12:
			cout << "¬ам во второй класс" << endl; 
			break;
		default:
			cout << "¬ам в первый класс" << endl;
	}	

	system("pause");1
	return 0;
}
