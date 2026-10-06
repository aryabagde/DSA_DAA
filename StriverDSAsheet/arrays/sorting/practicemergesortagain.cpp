#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Merge(int arr[], int low, int mid, int high){
    //copy from original to temp arrays and then sort and then copy them to the original array
    int n1 = mid - low +1;
    int n2 = high - mid;

    //creating temp arrays after getting their length

    int temp1[n1];;
    int temp2[n2];

    //copying from original to temp
    for(int i=0; i<n1; i++){
        temp1[i] = arr[low+i];
    }
    for(int i=0; i<n2; i++){
        temp2[i] = arr[mid+i+1];
    }
    int i=0, j=0, k=low;

    //comparison time and copying from temp to the original
    while(i<n1 && j<n2){
        if(temp1[i]<temp2[j]){
            arr[k] = temp1[i];
            i++;

        }
        else{
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }
    //if the above condition fails it means 1 of the array is exhausted

    while(i<n1){
        arr[k]= temp1[i];;
        k++;
        i++;
    }

    while(j<n2){
        arr[k] = temp2[j];
        k++;
        j++;
    }


}



void Mergesort(int arr[], int low, int high){
    if(low>=high) return; //base case thank you
    int mid = (high+low)/2;
    Mergesort(arr, low, mid);
    Mergesort(arr, mid+1, high);
    Merge(arr, low, mid, high);

}



int main(){

    int n;;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printarray(arr, n);
    Mergesort(arr, 0, n-1);

    return 0;
}