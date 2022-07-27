#include <iostream>
using namespace std;

void bubbleSort_recursion(int a[], int n, int i){
    if(n == 1) return;
    else{
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1])
                swap(a[j],a[j + 1]);
        }
        bubbleSort_recursion(a,n - 1,i++);
    }
}

void bubbleSort(int arr[], int n){
    bool isSwap = true;
    while(isSwap){
        isSwap = false;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] > arr[i + 1]){
                isSwap = true;
                swap(arr[i],arr[i + 1]);
            }
        }
    }
}

void bubbleSort2(int a[], int l, int r) {
	if (l == r) return;
	bool sorted = true;
	for (int i = l + 1; i < r; i++)
		if (a[i] < a[l]){
			swap(a[i], a[l]);
			sorted = false;
		}
	if(!sorted) bubbleSort2(a, l + 1, r);
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[] = {1,4,7,2,8,10,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    print(arr,n);
    system("pause");
    return 0;
}