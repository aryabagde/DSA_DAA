#include <bits/stdc++.h>
using namespace std;

//bubble sort where the biggest bubble will end up in the last
// time complexity is O(n^2) for worst and avg but after optimizatino we can get O(n)
int main(){

    int n;
    cin>>n;;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int flag = 0;
    for(int j=0; j<n-1; j++){
        for(int k=0; k<n-1; k++){
            if(arr[k]>arr[k+1]){
                flag =1;
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
        if(flag == 0){
            cout<<"the input array is already optimized";
            break;
        }
        for(int a=0; a<n; a++){
            cout<<arr[a]<<" ";
        }
        cout<<endl;
    }
    return 0;
}