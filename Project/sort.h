#ifndef _SORT_H
#define _SORT_H

/* slow sorts O(n^2) */
void bubble_sort(int* arr, int len);
void selection_sort(int* arr, int len);
void insertion_sort(int* arr, int len);

/* fast sorts O(n * log(n)) */
void heap_sort(int* arr, int len);
void merge_sort(int* arr, int len);
void quick_sort(int* arr, int len);

/* un-implemented */
void counting_sort(int* arr, int len);
void radix_sort(int* arr, int len);
void insertion_sort(int* arr, int len);

#endif // !_SORT_H