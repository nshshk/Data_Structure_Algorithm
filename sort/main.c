#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "common.h"
#include "MergeSort.h"
#include "QuickSort.h"

int main(void)
{
  int arr[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printArr(arr, sizeof(arr)/ sizeof(int));
  BubbleSort(arr, sizeof(arr) / sizeof(int));
  printArr(arr, sizeof(arr)/ sizeof(int));

  int arr1[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printArr(arr1, sizeof(arr1)/ sizeof(int));
  InsertionSort(arr1, sizeof(arr1)/sizeof(int));
  printArr(arr1, sizeof(arr1)/ sizeof(int));

  int arr2[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printArr(arr2, sizeof(arr2)/ sizeof(int));
  SelectionSort(arr2, sizeof(arr2)/sizeof(int));
  printArr(arr2, sizeof(arr2)/ sizeof(int));

  int arr3[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printArr(arr3, sizeof(arr3)/ sizeof(int));
  MergeSort(arr3, sizeof(arr3)/sizeof(int));
  printArr(arr3, sizeof(arr3)/ sizeof(int));

  int arr4[10] = {6, 4, 5, 3, 1, 2, 9, 7, 8, 10};

  printArr(arr4, sizeof(arr4)/ sizeof(int));
  QuickSort(arr4, 0, sizeof(arr4)/sizeof(int)-1);
  printArr(arr4, sizeof(arr4)/ sizeof(int));

  return 0;
}
