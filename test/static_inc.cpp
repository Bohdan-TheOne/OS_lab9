#include "proj.h"

#include <OS_lab9_dll.h>

_declspec(dllimport) int add2(int a, int b);
_declspec(dllimport) void nameOutput(int num);
_declspec(dllimport) void mergeSort(int* arr, long n);

void static_show_out(int num) {
	nameOutput(num);
}

void static_show_sort(int num) {
	srand(time(NULL));
	int* arr = new int[num];
	for (int i = 0; i < num; ++i) {
		arr[i] = rand() % 199 - 99;
	}
	printArray(arr, num);
	mergeSort(arr, num);
	printArray(arr, num);
}
