#include<bits/stdc++.h>
using namespace std;

//que: rotate the array by one place on the left so for [1,2,3,4,5] it will be [2,3,4,5,1]
 
void rotateleft(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
//this is the optimmal method
int main(){
    int n;;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rotateleft(arr, n);

    return 0;
}