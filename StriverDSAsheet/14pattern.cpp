#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char alpha;
    cin>>n;
    for(int i=0; i<n; i++){
        alpha= 'A';
        for(int j=0; j<=i; j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
    }
    return 0;
}