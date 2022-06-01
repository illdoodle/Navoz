#include "obmen.h"

void obmenMatrix(unsigned int *arr, int size)
{
	for(int j = 1; j < size; j++){
		for(int i = size - j; i < size; i++){
			obmen(*(arr + j * size + i), *(arr + (size - i - 1) * size + (size - j - 1)));
		}
	}
}
