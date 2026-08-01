#include<bits/stdc++.h>
using namespace std;

/////////////////////////MULTIPLE RECURSIONS?????????????????

int fibonacci(int n){                      // as u can see only 1 parameter was required and not 2
    if(n == 1) return 1;               
    if(n == 0) return 0;
    return fibonacci(n-1) + fibonacci(n-2);  //time complexity is O(2^n)
}

void forloop_fibonacci(int n){                //intiate an array for this
    int arr[n];
    arr[0] = 0; 
    arr[1] = 1;
    for(int i=2; i<=n; i++){
        arr[i]= arr[i-1] + arr[i-2];
    }
    cout<<arr[n];
}

int main(){
    int n;
    cin>>n;
    // cout<<fibonacci(n);
    forloop_fibonacci(n);
    return 0;
}