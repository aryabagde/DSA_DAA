#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char count;
    count = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    return 0;
}