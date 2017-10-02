/*#include <stdio.h>
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
}*/
#include <stdio.h>

void drawrect(int w, int h)
{
	int i, j;
	for (i = 0; i < w; i++)
		putchar('x');
	putchar('\n');
	for (i = 2; i < h; i++)
	{
		putchar('x');
		for (j = 2; j < w; j++)
			putchar(' ');
		putchar('x');
		putchar('\n');
	}
	for (i = 0; i < w; i++)
		putchar('x');
	putchar('\n');
}

int main()
{
	drawrect(10, 15);
	drawrect(3, 5);
	drawrect(50, 20);
	drawrect(10, 10);
	drawrect(2, 2);
}