#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

bool isSimple(int n);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	for(int i = 0; i < 124; i++){
		cout << i << ( isSimple(i) ? " + " : " - " ) << endl;
	}

	system("pause >> null");
	return 0;
}

bool isSimple(int n){
	for(int d = 2; d < n; d++){
		if(n % d == 0){
			return false;
		}
	}
	return true;
}