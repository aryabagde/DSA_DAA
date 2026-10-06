#include <bits/stdc++.h>
using namespace std;

// so, u are given an array and all the values occur more than once except one value, find that value

void bruteforce(int arr[], int n){  // time complexity is evident that it is O(n^2)
    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(i == j) continue;
            if(arr[j] == arr[i]) count++;
        }
        if(count == 0){
            cout<<arr[i]<<" is the odd value"<<endl;
            break;
        }
    }
}

//better method would be using 2 pointers i guess


int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bruteforce(arr, n);
    return 0;
}