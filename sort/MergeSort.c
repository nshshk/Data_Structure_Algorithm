#include "MergeSort.h"
#include <stdio.h>

void MergeSort(int *arr, int size)
{
    int *tempArray = (int *)malloc(size * sizeof(int));
    MergeSortUtil(arr, tempArray, 0, size - 1);
}

void MergeSortUtil(int *arr, int *tempArray, int left, int right)
{
    if(left >= right)
        return;

    int mid = (left + right)/2;

    MergeSortUtil(arr, tempArray, left, mid); // to the left
    MergeSortUtil(arr, tempArray, mid + 1, right); // to the right
    Merge(arr, tempArray, left, mid, right);  // for merge
}

void Merge(int *arr, int *tempArray, int left, int mid, int right)
{
    int leftStart = left;
    int leftStop = mid;
    int rightStart = mid + 1;
    int rightStop = right;
    int cnt = left;

    while(leftStart <= leftStop && rightStart <= rightStop)
    {
        if(arr[leftStart] < arr[rightStart])
        {
            tempArray[cnt++] = arr[leftStart++];
        }
        else if(arr[leftStart] > arr[rightStart])
        {
            tempArray[cnt++] = arr[rightStart++];
        }
    }

    while(leftStart <= leftStop)
        tempArray[cnt++] = arr[leftStart++];

    while (rightStart <= rightStop) 
        tempArray[cnt++] = arr[rightStart++];

    for(int i = left; i < right; i++)
        arr[i] = tempArray[i];
}

