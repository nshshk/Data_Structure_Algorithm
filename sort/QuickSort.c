#include "QuickSort.h"

void QuickSort(int arr[], int lower, int upper)
{
    if (upper <= lower)
        return;

    int pivot = arr[lower];

    int start = lower;
    int stop = upper;

    while (lower < upper) {
        while (lower < upper && arr[lower] <= pivot) {
            lower++;
        }
        while (lower <= upper && arr[upper] > pivot) {
            upper--;
        }
        if (lower < upper) {
            int temp = arr[upper];
            arr[upper] = arr[lower];
            arr[lower] = temp;
        }
    }

    int temp = arr[upper];
    arr[upper] = arr[start];
    arr[start] = temp;

    QuickSort(arr, start, upper - 1);
    QuickSort(arr, upper + 1, stop);
}

