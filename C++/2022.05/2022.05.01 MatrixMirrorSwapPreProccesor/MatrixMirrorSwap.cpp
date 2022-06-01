#include "print.h"
#include "obmenmatrix.h"
#include <iostream>
using namespace std;

void main()
{
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

