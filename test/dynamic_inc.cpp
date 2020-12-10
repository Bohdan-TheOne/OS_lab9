#include "proj.h"

typedef void(_cdecl* out_func_t)(int);
typedef void(_cdecl* sort_func_t)(int*, long);

void dynamic_show_out(int num) {
    HINSTANCE hModule = NULL;
    hModule = ::LoadLibrary(L"C:\\Users\\bohda\\Desktop\\Bohdan\\study\\3_semester\\OS\\labs\\Proj\\lab9\\OS_lab9_dll\\Debug\\OS_lab9_dll.dll");
    out_func_t nameOutput = NULL;
    if (hModule != NULL) {
        nameOutput = (out_func_t)::GetProcAddress(hModule, "nameOutput");
    }
	nameOutput(num);
}

void dynamic_show_sort(int num) {
    HINSTANCE hModule = NULL;
    hModule = ::LoadLibrary(L"C:\\Users\\bohda\\Desktop\\Bohdan\\study\\3_semester\\OS\\labs\\Proj\\lab9\\OS_lab9_dll\\Debug\\OS_lab9_dll.dll");
    sort_func_t mergeSort = NULL;
    if (hModule != NULL) {
        mergeSort = (sort_func_t)::GetProcAddress(hModule, "mergeSort");
    }

	srand(time(NULL));
	int* arr = new int[num];
	for (int i = 0; i < num; ++i) {
		arr[i] = rand() % 199 - 99;
	}
	printArray(arr, num);
	mergeSort(arr, num);
	printArray(arr, num);
}
