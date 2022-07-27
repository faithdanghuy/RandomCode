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
