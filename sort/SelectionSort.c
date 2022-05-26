#include "SelectionSort.h"
#include "common.h"

void SelectionSort(int arr[], int size)
{
    int max_idx, i, j, temp;

    for(i = 0; i < size - 1; i ++)
    {
        for(j = 0; j < size - 2 - i; j++)
        {
            if(arr[j+1] > arr[j])
            {
                max_idx = j + 1;
            }
        }
        temp = arr[j];
        arr[j] = arr[max_idx];
        arr[max_idx] = temp;
    }
}
