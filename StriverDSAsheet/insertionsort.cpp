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
// time complexity is O(n^2) worst and average the best time complexity will be O(n) if i switch the second loop to while instead of for so that it never excess it in the besst case scenario
    for(int j=1; j<n; j++){
        for(int k=j; k>0; k--){      // switch the second loop with while
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