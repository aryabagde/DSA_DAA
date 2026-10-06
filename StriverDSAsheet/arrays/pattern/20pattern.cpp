#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k, l;
    cin>>n;
    k = 2*n;
    l = 2*n;
    m = n-1; 
    for(int i=1; i<=l; i++){
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
        cout<<endl;
        if(i<n){
            m--;
        }
        else {
            m++;
        }
        

    }
    return 0;
}