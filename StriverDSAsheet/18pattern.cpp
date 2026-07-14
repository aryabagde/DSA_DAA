#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    char cho;
    cin>>n;
    m=1;
    for(int i=1; i<=n; i++){
        cho = 'A'+(n-m);
        for(int j=1; j<=i; j++){
            cout<<cho;
            cho++;
        }
        cout<<endl;
        m++;
    }
    return 0;
}