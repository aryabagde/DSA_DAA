#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapfunc(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int pivotfunc(int arr[], int low, int high){
    int pivot = low; // considering the first element as pivot which will result in O(n^2) for the worst case scenarios
    int i = low, j = high;
    while(i<j){
        while(i<high && arr[i]<arr[pivot]){
            i++;
        } 
        while(j>low && arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swapfunc(arr, i, j);
        }
    }
    // we will not swap if j crosses i so
    swapfunc(arr, low, j); // putting pivot element in the correct position
}

void Quicksort(int arr[], int low, int high){
    if(low>=high) return;

    int pivot = pivotfunc(arr, low, high);
    Quicksort(arr, low, pivot-1);
    Quicksort(arr, pivot+1, high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i <n; i++){
        cin>>arr[i];
    }
    printarray(arr, n);
    Quicksort(arr, 0, n-1);

    return 0;
}