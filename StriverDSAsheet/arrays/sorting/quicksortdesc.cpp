#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;;
}

void swapfunc(int arr[], int i, int j){
    int temp= arr[i];;
    arr[i] = arr[j];
    arr[j] = temp;
}


int pivotfunc(int arr[], int low, int high){
    int i=low, j=high, pivot=low;

    while(i<j){
        while(i<high && arr[i]>arr[pivot]){
            i++;
        }
        while(j>low && arr[j]<arr[pivot]){
            j--;
        }
        if(i<j){
            swapfunc(arr, i, j);
        }
    }
    //no swapping for j crossing i
    swapfunc(arr, low, j);
    return j;
}

void Quicksortdesc(int arr[], int low, int high){
    if(low>=high) return;

    int pivot = pivotfunc(arr, low, high);
    Quicksortdesc(arr, low, pivot-1);
    Quicksortdesc(arr, pivot+1, high);;;
}


int main(){
    int n;;
    cin>>n;;
    int arr[n];
    for(int i=0; i< n; i++){
        cin>>arr[i];
    }
    printarray(arr, n);
    Quicksortdesc(arr, 0, n-1);
    return 0;
}