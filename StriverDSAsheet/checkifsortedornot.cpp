#include<bits/stdc++.h>
using namespace std;

int checkifsortedornot(vector <int> &v){  // O(n) time complexity
    for(int i=1; i<v.size(); i++){
        if(v[i]<v[i-1]) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int check = checkifsortedornot(v);
    if(check ==1 ) cout<<"sorted";
    else cout<<"not sorted";
    return 0;
}