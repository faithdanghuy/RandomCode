#include <iostream>
using namespace std;

void merge(int arr[], int left[], int right[], int left_len, int right_len){
    int i = 0, j = 0, k = 0;
    while(i < left_len && j < right_len){
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }
    while(i < left_len)
        arr[k++] = left[i++];
    while(j < right_len)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int len){
    if(len < 2) return;
    int mid = len/2;
    int *left = new int[mid];
    int *right = new int[len - mid];
    for(int i = 0; i < mid; i++)
        left[i] = arr[i];
    for(int j = mid; j < len; j++)
        right[j - mid] = arr[j];
    mergeSort(left,mid);
    mergeSort(right,len - mid);
    merge(arr,left,right,mid,len - mid);
}
