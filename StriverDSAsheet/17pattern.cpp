#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, m;
    cin>>n;
    k = 2*n-1;
    m = 1;
    char count;
    for(int i=1; i<=n; i++){
        count = 'A';
        for(int j=1; j<=k; j++){
            if(j<=(n-m)){
                cout<<" ";
            }
            else if(j>=(n+m)){
                cout<<" ";
            }
            else{
                cout<<count;
                if(j<n) count++;
                else count--;
            }
        }
        cout<<endl;
        m++;
    }

    return 0;
}