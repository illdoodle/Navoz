#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void fill_1(int**, int);
void fill_2(int**, int);
void fill_3(int**, int);
void print(int**, int);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	int size = 5;
	int **arr;
	arr = (int**)malloc(sizeof(int*) * size);

	for(int i = 0; i < size; i++){
		arr[i] = (int*)malloc(sizeof(int) * size);
	}

	fill_1(arr, size);
	fill_2(arr, size);
	fill_3(arr, size);
	print(arr, size);

	for(int i = 0; i < size; i++){
		free(arr[i]);
	}
	free(arr);

	system("pause >> null");
	return 0;
}

void fill_1(int** arr, int size)
{
	for(int y = 1; y < size; y++){
		for(int x = 0; x < y; x++){
			arr[y][x] = 1;
		}	
	}
}

void fill_2(int** arr, int size)
{
	for(int x = 1; x < size; x++){
		for(int y = 0; y < x; y++){
			arr[y][x] = 2;
		}	
	}
}

void fill_3(int** arr, int size)
{
	for(int x = 0; x < size; x++){
		arr[x][x] = 3;
	}
}

void print(int** arr, int size)
{
	for(int y = 0; y < size; y++){
		for(int x = 0; x < size; x++){
			cout << arr[y][x];
		}	
		cout << endl;
	}
}
