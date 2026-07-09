#include <bits/stdc++.h>
using namespace std;

int main(){

    ////combining both
    int n,k,m;
    cin>>n;
    k = n+(n-1);
    m = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j<=(n-m)){
                cout<<" ";
            }
            else if(j>=(n+m)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        m++;
    }
    m=n-1;
    for(int i=n; i>=1; i--){
        for(int j=k; j>=1; j--){
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
        cout<<endl;
        m--;
    }

    return 0;
}