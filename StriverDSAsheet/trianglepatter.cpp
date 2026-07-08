#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin>>n;
    //total no of j = n+(n-1)
    //i=1 j=1,2,...n-1 no * then 1* then n+1 to j no star
    k = n+(n-1);
    int m=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(j<=(n-m)){
                cout<<" ";
            }
            else if( j>=(n+m)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        m++;
        cout<<endl;
    }
    return 0;
}