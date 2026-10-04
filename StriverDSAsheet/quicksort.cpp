#include <bits/stdc++.h>
using namespace std;

//Quick Sort 
// it has timmme complexity similar to merge sort i.e. O(nlogn) for best and avg and for the worst case is O(n^2)
// but the space complexity is O(n) in merge sort and in quick sort it is constant

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
    int pivot = low;
    int i=low, j=high;
    while(i<j){
        while(i<high && arr[i]<arr[pivot]){
            i++;
        }
        while(j>low && arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swapfunc(arr, i, j);;
        }                                 
    }// no swapping after j crosses i
    swapfunc(arr, low, j);  // we will swap the pivot element at the centre which the first element j comes across after crossing i
    return j;
}

void Quicksort(int arr[], int low, int high){
    if(low>=high) return; //base case thank you

    int pivot = pivotfunc(arr, low, high);
    Quicksort(arr, low, pivot-1);  //solve before and after that partition
    Quicksort(arr, pivot+1, high);


}


int main(){
    int n; 
    cin>>n;;
    int arr[n];;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    printarray(arr, n);
    Quicksort(arr, 0, n-1);

    return 0;
}