#include <iostream>
using namespace std;

void swapNum(int arr[], int i1, int i2){
    int temp = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
    int leftIndex = low, rightIndex = high;
    while(leftIndex < rightIndex){
        while(arr[leftIndex] <= pivot && leftIndex < rightIndex)
            leftIndex++;
        while(arr[rightIndex] >= pivot && leftIndex < rightIndex)
            rightIndex--;
        swapNum(arr,leftIndex,rightIndex);
    }
    swapNum(arr,high,leftIndex);
    return leftIndex;
}

void quickSort(int arr[], int low, int high){
    if(low >= high) return;
    int pivot = arr[high];
    int leftIndex = partition(arr,low,high,pivot);
    quickSort(arr,low,leftIndex - 1);
    quickSort(arr,leftIndex + 1,high);
}
