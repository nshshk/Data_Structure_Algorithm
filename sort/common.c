#include "common.h"

void printArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%2d ", arr[i]);
    }
    printf("\n");
}

