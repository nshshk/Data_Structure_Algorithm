#include "SelectionSort.h"
#include "common.h"

void SelectionSort(int arr[], int size)
{
    int max_idx, i, j, temp;

    for(i = 0; i < size - 1; i ++)
    {
        max_idx = 0;
        for(j = 1; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[max_idx])
            {
                max_idx = j;
            }
        }
        temp = arr[size-1-i];
        arr[size-1-i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}
