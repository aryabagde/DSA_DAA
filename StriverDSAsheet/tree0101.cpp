#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m, flag;
    cin>>n;
    m=1;
    flag =1;
    for(int i=1; i<=n; i++){
        if(i%2 == 0) flag =0;
        else flag =1;
        for(int j=1; j<=n; j++){
            if(j<=m){
                cout<<flag;
                if(flag == 1) flag =0;
                else flag =1;
            }
            else{
                cout<<" ";
            }
        }
        m++;
        cout<<endl;
    }
    return 0;
}