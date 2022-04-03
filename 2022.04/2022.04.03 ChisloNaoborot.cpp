#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	int n;
	cout << "¬ведите число = ";
	cin >> n;

	bool isN = n < 0;
	if(isN){
		n = -n;
	}

	do{
		cout << n % 10;
		n /= 10;
	}while(n > 0);

	if(isN){
		cout << "-" << endl;
	}

	system("pause >> null");
	return 0;
}
