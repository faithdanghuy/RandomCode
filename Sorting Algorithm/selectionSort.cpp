#include <algorithm>
#include <iostream>
using namespace std;

void selectionSort(int a[], int left, int right){
    for(int i = left; i < right; i++){
        int min = i;
        for(int j = i + i; j <= right; ++j)
            if(a[j] < a[min]) min = j;
        swap(a[i],a[min]);
    }
}

void print(int a[], int n){
    for(int i = 0; i < n; i++)
        cout<<i<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {1,8,4,6,2,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,0,n - 1);
    print(arr,n);
    system("pause");
    return 0;
}