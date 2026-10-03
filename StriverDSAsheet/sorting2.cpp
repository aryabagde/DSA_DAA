#include <bits/stdc++.h>
using namespace std;

//bubble sort where the biggest bubble will end up in the last

int main(){

    int n;
    cin>>n;;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int j=0; j<n-1; j++){
        for(int k=0; k<n-1; k++){
            if(arr[k]>arr[k+1]){
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
        for(int a=0; a<n; a++){
            cout<<arr[a]<<" ";
        }
        cout<<endl;
    }
    return 0;
}