#include <bits/stdc++.h>
using namespace std;

void rev_arr(int arr[], int n){       //basic way to reverse an array
    for(int i=0; i<n/2; i++){
        int temp; 
        temp = arr[i];
        arr[i] =  arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int j=0; j<n; j++){
        cout<<arr[j];
    }
}

void rev_swap_arr(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void rec_rev_arr(int arr[] , int s, int e){  // mistake i commited here is do not write any execution station below return statement
    if(s>=e) return;
    else{
        swap(arr[s], arr[e]);
        rec_rev_arr(arr, s+1, e-1);      // here earlier i added return function but it doesn't matter coz there is nothing to execute even after the return function so it will return natually
    }
}

void print_arr(int arr[], int n){           // here i wrote the execution statement after the return statement which means
    if(n<0) return;
    print_arr(arr, n-1);
    cout<<arr[n];
}

int main(){
    int arr[] = {2,3, 5,4};
    //rev_arr(arr, 4);
    //rev_swap_arr(arr, 4);
    rec_rev_arr(arr,0, 3);
    print_arr(arr, 3);
    return 0;
}