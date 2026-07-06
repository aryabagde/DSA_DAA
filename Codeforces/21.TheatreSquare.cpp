#include <bits/stdc++.h>
using namespace std;

int main(){
    long long m,n,a;
    cin>>m>>n>>a;
    cout<<((m+a-1)/a) * ((n+a-1)/a);

    return 0;
 }
// floor(x / a) = x / a
// ceil(x / a)  = (x + a - 1) / a