#include <iostream>
using namespace std;

int main(){

    int n,k,match,count;
    cin>>n>>k;
    count =0;
    // will use array for this since we know the fixed size of it
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    match = arr[k];
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            if(arr[i]>=match){
            count += 1;
            }
        }
    }

    cout<<count;
    return 0;
}