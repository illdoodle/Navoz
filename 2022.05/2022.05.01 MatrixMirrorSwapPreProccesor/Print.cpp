#include <iostream>
using namespace std;

void printMatrix(unsigned int *arr, int w, int h)
{
	for(int j = 0; j < h; j++){
		for(int i = 0; i < w; i++){
			cout << arr[j * w + i] << " ";
		}
		cout << endl;
	}

}