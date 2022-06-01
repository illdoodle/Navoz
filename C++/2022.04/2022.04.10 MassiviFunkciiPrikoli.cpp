#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void arrayFill(int *arrF, int sizeF);
int *arrayMin(int *arrF, int sizeF);
int arraySum(int *arrF, int sizeF);
void arrayPrint(int *arrF, int wF, int hF);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	for (int i = 0; i < 3; i++) {
		int w = rand() % 4 + 2;
		int h = rand() % 3 + 2;
		int size = w * h;
		int *arr = new int[size];
		arrayFill(arr, size);
		arrayMin(arr, size);
		arraySum(arr, size);
		arrayPrint(arr, w, h);
		cout << "Сумма = " << arraySum(arr, size) << endl;
		cout << "Минимум = " << *arrayMin(arr, size) << endl;

		delete[] arr;
	}

	system("pause >> null");
	return 0;
}

void arrayFill(int *arrF, int sizeF)
{
	for (int i = 0; i < sizeF; i++) {
		arrF[i] = rand() % 10;
	}
}

int* arrayMin(int *arrF, int sizeF)
{
	int *min = arrF;
	for (int i = 1; i < sizeF; i++) {
		if (arrF[i] < *min) {
			min = arrF + i;
		}
	}
	return min;
}

int arraySum(int *arrF, int sizeF)
{
	int sum = 0;
	for (int i = 0; i < sizeF; i++) {
		sum+=arrF[i];
	}
	return sum;
}

void arrayPrint(int *arrF, int wF, int hF)
{
	for (int j = 0; j < hF; j++) {
		for (int i = 0; i < wF; i++) {
			cout << arrF[j * wF + i]; 
		}
		cout << endl;
	}
}
