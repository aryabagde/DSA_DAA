#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// what we need to do is to get the minimum distance from all four sides 
// before that subtract values from 4 
// under the header of algorithm comes the minimum function
// trick i used here is to convert the 4 distances into essential 2 distances

int main(){
    int n;
    cin>>n;
    for(int i=0; i<(2*n-1); i++){
        for(int j=0; j<(2*n-1); j++){
            int l, m;
            l = i;
            m = j;
            if(l>((2*n-2)/2)){
                l = (2*n-2)-l;
            }
            if(m>((2*n-2)/2)){
                m = (2*n-2)-m;
            }
            cout<<(n-min(l,m));
        }
        cout<<endl;
    }
    return 0;
}