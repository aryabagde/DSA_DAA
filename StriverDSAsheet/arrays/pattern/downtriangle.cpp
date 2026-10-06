#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,m;
    cin>>n;
    k=k+(k-1);
    m=n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=k; j++){
            if(j<=n-m){
                cout<<" ";
            }
            else if(j>=n+m){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        m--;
        cout<<endl;
    }
    return 0;
}