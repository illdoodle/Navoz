#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int m;

	cout << "ѕрограмма показывает, сколько дней в указанном мес€це в обычном году" << endl << "¬ведите мес€ц = ";
	cin >> m;
	
	switch(m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12:
	cout << "¬ этом мес€це 31 день" << endl;
	}

	switch(m) {
		case 4:
		case 6:
		case 9:
		case 11:
	cout << "¬ этом мес€це 30 дней" << endl;
	}

	switch(m) {
		case 2:
	cout << "¬ этом мес€це 28 дней" << endl;
	}

	if (m > 12) {
		cout << "ƒурачок?" << endl;
	}

	system("pause");
	return 0;
}
