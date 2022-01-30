#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int **a, h, w;
	cout << "¬ведите высоту двумерного **массива = ";
	cin >> h;
	a = (int**)malloc(h * sizeof(int*));
	cout << "¬ведите ширину двумерного **массива = ";
	cin >> w;
	for(int i = 0; i < h; i++){
		a[i] = new int[w];
	}

	for(int j = 0; j < h; j++){
		for(int i = 0; i < w; i++){
			a[j][i] = j * 100 + i * 10;
			cout << a[j][i] << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < h; i++){
		free(a[i]);
	}
	free(a);

	system("pause >> null");
	return 0;
}