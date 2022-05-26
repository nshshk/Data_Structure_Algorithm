#include "InsertionSort.h"
#include "common.h"

void InsertionSort(int arr[], int size)
{
    int i,j, data;

    for(i = 0; i < size - 1; i++)
    {
        data = arr[i];
        for(j = i; j > 0 && arr[j-1] > data; j--)
        {
           arr[j] = arr[j-1];
        }
        arr[j] = data;
    }
}

