#include "proj.h"

typedef int(_cdecl* proc_t)(int, int);

void printSum(int a, int b) {
	HINSTANCE hModule = NULL;
	hModule = ::LoadLibrary(L"C:\\Users\\bohda\\Desktop\\Bohdan\\study\\3_semester\\OS\\labs\\Proj\\lab9\\OS_lab9_dll\\Debug\\OS_lab9_dll.dll");

    proc_t add2 = NULL;

    if (hModule != NULL)
    {
        add2 = (proc_t)::GetProcAddress(hModule, "add2");
    }
    FreeLibrary(hModule);
}



void printArray(int* arr, long size) {
    for (long i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
