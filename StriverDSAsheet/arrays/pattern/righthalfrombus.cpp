#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    m =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>m){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        m++;
    }
    m=n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        m--;
    }
    return 0;
}