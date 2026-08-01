#include <bits/stdc++.h>
using namespace std;

int main(){
    //continuing the last question the basic hashing using array for strings less go
    string st;
    cin>>st;
    int hash[st.length()] = {0};
    for(int i=0; i<st.length(); i++){
        hash[st[i]-'a']++;
    }
    int m;
    cin>>m;
    for(int i=0;i<m; i++){
        int c;
        cout<<hash[c - 'a'];
    }
    return 0;
}