#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin>>n;
    k = 2*n -1;
    char count;
    int m = 1;
    for(int i=1; i<=n; i++){
        count = 'A';
        for(int j=1; j<=k; j++){
            if(m<n){
                cout<<" ";

            }
            else if(j>k){
                cout<<" ";
            }
            else{
                cout<<count;
            }
        }
        cout<<endl;
    }

    return 0;
}