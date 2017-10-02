#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#define length (sizeof(arr) / sizeof(int))

int main() {
	
	srand(time(NULL));

	int arr[10];

	for (int i = 0; i < length; i++) {
		arr[i] = ((rand() % 1000) + 1);
		printf("[%02d] : %d\n", i, arr[i]);
	}

	merge_sort(&arr, 10);
	puts("---------------------");

	for (int i = 0; i < length; i++)
		printf("[%02d] : %d\n", i, arr[i]);


	return 0;
}