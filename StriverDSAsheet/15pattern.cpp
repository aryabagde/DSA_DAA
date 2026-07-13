#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    char count;
    for(int i=n; i>=1; i--){
        count = 'A';
        for(int j=1; j<=i; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}