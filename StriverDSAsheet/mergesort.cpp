#include <bits/stdc++.h>
using namespace std;

//Merge sort: divide, sort and merge
// need recursion
// merge sort without any pointers or vectors
// time complexity is O(nlogn)

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Merge(int arr[], int low, int mid, int high){
    //need to create temp arrays and then transfer them to the original array at the correct place
    int n1 = mid - low +1;;
    int n2 = high - mid;

    int temp1[n1];
    int temp2[n2];

    // copying all the values from the original array to the temps
    for(int i=0; i<n1; i++){
        temp1[i] = arr[low + i];
    }
    for(int i=0; i<n2; i++){
        temp2[i] = arr[mid +1 +i];
    }

    int i=0, j=0, k=low;
    //now what we want to compare between the values from the left and the right array and assuming they are sorted among themselves we will just parse through them
    while(i<n1 && j<n2){
        if(temp1[i]<temp2[j]){
            arr[k] = temp1[i];;
            i++;
        }
        else{
            arr[k] = temp2[j];
            j++;
        }
        k++;
    }
    // this while loop will only be executed when one of the arrays is exhauseted
    while(i<n1){
        arr[k] = temp1[i];
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
    int mid = (low+high)/2;
    Mergesort(arr, low, mid);
    Mergesort(arr, mid+1, high);
    Merge(arr, low, mid, high);
}

int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Mergesort(arr, 0, n-1);
    printarray(arr, n);

    return 0;
}