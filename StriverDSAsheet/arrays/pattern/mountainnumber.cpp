#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, count;
    cin>>n;
    k=2*n;
    for(int i=1; i<=n; i++){
        m=1;
        count=1;
        for(int j=1; j<=k; j++){
           if(m<=i){
            cout<<m;
           }
           else{
            cout<<" ";
           }
           if(count<n){
                m++;
           } 
           else if(count == n){
                if(m<=i){
                cout<<m;
            }
            else{
                cout<<" ";
            }
           }
           else{
            m--;
           }
           count++;
        }
        cout<<endl;
    }
    return 0;
}