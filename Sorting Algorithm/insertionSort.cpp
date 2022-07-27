#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j--];
        }
        arr[j + 1] = current;
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {1,4,7,2,8,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    print(arr,n);
    system("pause");
    return 0;
}