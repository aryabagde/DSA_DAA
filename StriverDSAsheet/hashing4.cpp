#include <bits/stdc++.h>
using namespace std;

//time complexityy of map for storing and fetching is log(n) for best avg and worst
// but for unordered map time complexityy is O(1) best and avg and for the worst case O(n) which is vvery rare
// so first use unordered map and if u gives error of Time limit exceeded TLE then use ordered maps

//the reason for O(n) time complexity in unorder map is due to collision 
//hashing is internally done using hash tables and they are maintained using chain hashing and all different types

// also the differce in both is the data type of the key value it cannot be a pair, or smthg else in unordered it can only be like single data type char int 
//hashing of string input instead of <int, int> we use <char, int>
int main(){

    string st;
    cin>>st;
    map<char, int> mp;
    for(int i=0; i<st.length(); i++){
        mp[st[i]]++;
    }
    int m;
    cin>>m;
    for(int j=0; j<m; j++){
        char ch;
        cin>>ch;
        cout<<mp[ch]<<endl;
    }



    return 0;
}