#include <bits/stdc++.h>
using namespace std;

// move all the zeroes at the end of the array

void bruteforce(int arr[], int n){ // so the time complexity would be O(n) and the space commplexity would be O(n) considering all of the elements are non zero
    vector<int> v;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            v.push_back(arr[i]);
        }
    }
    for(int i=0; i<v.size(); i++){
        arr[i] = v[i];
    }
    if(v.size()<n){
        for(int i=v.size(); i<n; i++){
            arr[i] = 0;
        }
    }
    //print out
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void optimal(int arr[], int n){
    //using two pointers
    int i=-1, j=0;
    while(j<n){
        if(arr[j] == 0){
            j++;
        }
        else{
            i++;
            arr[i] = arr[j];
            j++;
        }

    }
    if(i != n-1){
        i++;
        while(i <= n-1){
            arr[i] = 0;
            i++;
        }
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int n;;;
    cin>>n;
    int arr[n];;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //bruteforce(arr, n);
    optimal(arr, n);
    return 0;
}