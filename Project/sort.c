#include "sort.h"
#include <stdbool.h>
#include <malloc.h>

/* slow sorts O(n^2) */
void bubble_sort(int* arr, int len) {
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 0; i < len - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int t = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = t;
				swapped = true;
			}
		}
	}
}

void selection_sort(int* arr, int len) {}	

void insertion_sort(int* arr, int len) {}

/* fast sorts O(n * log(n)) */
void heap_sort(int* arr, int len) {}

void merge_sort(int* arr, int len) {
	/* return when the arr is of size 1 (sorted by default) */
	if (len == 1)
		return;

	/* pick pivot point */
	int half = len / 2;

	/* merge sort the half below the pivot */
	merge_sort(arr, half);

	/* merge sort the half above the pivot*/
	merge_sort(arr + half, len - half);

	/* merge the sorted lower and upper halves */
	/* a is the lower half, b is the upper half, c is the temp array which will contain the merged result */
	int *a = arr, *b = arr + half, *c = calloc(len, sizeof(int)), t = 0;
	int a_len = half;
	int b_len = len - half;
	
	/* copy the smaller first value from the two array's which are already sorted */
	while (a_len && b_len) {
		if (*a > *b) {
			c[t++] = *(b++);
			b_len--;
		} else {
			c[t++] = *(a++);
			a_len--;
		}
	}

	/* only one of these will happen as the other will have had all its elements inserted into the temp array */
	while (a_len--) { c[t++] = *(a++); }
	while (b_len--) { c[t++] = *(b++); }

	/* update arr to contain the sorted, merged arrays */
	for (int i = 0; i < len; i++) {
		arr[i] = c[i];
	}

	/* free the temp array */
	free(c);
}

void quick_sort(int* arr, int len) {

}

/* un-implemented */
void counting_sort(int* arr, int len) {}

void radix_sort(int* arr, int len) {}