#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, m;
    cin>>n;
    k = 2*n;
    m=0;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++){
            if(j<=(n-m)){
                cout<<"*";
            }
            else if(j>(n+m)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        if(i<n) m++;
        else if(i==n);
        else m--;
        cout<<endl;
    }
    return 0;
}