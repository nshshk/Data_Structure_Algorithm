#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "common.h"
#include "MergeSort.h"
#include "QuickSort.h"

int main(void)
{
  int arr[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printf("Before Bubble : ");
  printArr(arr, sizeof(arr)/ sizeof(int));
  BubbleSort(arr, sizeof(arr) / sizeof(int));
  printf("After Bubble : ");
  printArr(arr, sizeof(arr)/ sizeof(int));
  printf("\n");

  int arr1[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printf("Before Insert : ");
  printArr(arr1, sizeof(arr1)/ sizeof(int));
  InsertionSort(arr1, sizeof(arr1)/sizeof(int));
  printf("After Insert : ");
  printArr(arr1, sizeof(arr1)/ sizeof(int));
  printf("\n");

  int arr2[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printf("Before Select : ");
  printArr(arr2, sizeof(arr2)/ sizeof(int));
  SelectionSort(arr2, sizeof(arr2)/sizeof(int));
  printf("After Select : ");
  printArr(arr2, sizeof(arr2)/ sizeof(int));
  printf("\n");

  int arr3[8] = {3, 7, 2, 5, 1, 8, 6, 4};

  printf("Before Merge : ");
  printArr(arr3, sizeof(arr3)/ sizeof(int));
  MergeSort(arr3, sizeof(arr3)/sizeof(int));
  printf("After Merge : ");
  printArr(arr3, sizeof(arr3)/ sizeof(int));
  printf("\n");

  int arr4[10] = {6, 4, 5, 3, 1, 2, 9, 7, 8, 10};

  printf("Before Quick : ");
  printArr(arr4, sizeof(arr4)/ sizeof(int));
  QuickSort(arr4, 0, sizeof(arr4)/sizeof(int)-1);
  printf("After Quick : ");
  printArr(arr4, sizeof(arr4)/ sizeof(int));

  return 0;
}
