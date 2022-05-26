#ifndef _MERGE_SORT_H_
#define _MERGE_SORT_H_

void MergeSort(int arr[], int size);
void Merge(int *arr, int *tempArray, int left, int mid, int right);
void MergeSortUtil(int *arr, int *tempArray, int left, int right);

#endif
