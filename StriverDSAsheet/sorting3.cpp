#include <bits/stdc++.h>
using namespace std;

//insertion sort: select an element and place it in the right spot

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=1; j<n; j++){
        for(int k=j; k>0; k--){
            if(arr[k]<arr[k-1]){
                int temp = arr[k];
                arr[k] = arr[k-1];
                arr[k-1] = temp;
            }
        }
        for(int m=0; m<n; m++){
            cout<<arr[m]<<" ";
        }
        cout<<endl;
    }
    return 0;
}