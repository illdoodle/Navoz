#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

template<class T>
void printMatrix(T *arr, int w, int h);
template<class T>
void obmenMatrix(T *arr, int size);
template<class T>
void obmen(T &a, T &b);

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	const int size = 3;
	unsigned int arr[size][size];
	for(int i = 0; i < size * size; i++){
		arr[0][i] = rand() % 9 + 1;
	}

	printMatrix((unsigned int*)arr, size, size);
	obmenMatrix((unsigned int*)arr, size);
	cout << endl;
	printMatrix((unsigned int*)arr, size, size);

	system("pause >> null");
}

template<class T>
void printMatrix(T *arr, int w, int h)
{
	for(int j = 0; j < h; j++){
		for(int i = 0; i < w; i++){
			cout << arr[j * w + i] << " ";
		}
		cout << endl;
	}

}

template<class T>
void obmenMatrix(T *arr, int size)
{
	for(int j = 1; j < size; j++){
		for(int i = size - j; i < size; i++){
			obmen(*(arr + j * size + i), *(arr + (size - i - 1) * size + (size - j - 1)));
		}
	}
}

template<class T>
void obmen(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}