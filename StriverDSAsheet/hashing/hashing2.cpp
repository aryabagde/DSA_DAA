#include <bits/stdc++.h>
using namespace std;

//////IMP explicit typecast rules u cannot type cast between (int) and (string) coz it is very confusing for the compiler 
// on the other hand explicit typecasting works between (char), (int), (float), (double)

int main(){
    //continuing the last question the basic hashing using array for strings less go
    // input example
    // kafjsbdfkaslkdb
    // 4
    // a s k l
    string st;
    cin>>st;
    int hash[26] = {0};
    for(int i=0; i<st.length(); i++){
        hash[st[i]-'a']++;                // here st[i] is a char but it also has an ascii value in int so due to implicit typecasting the function will consider int instead of char
    }                                     // ascii value of a is 65 b is 66 and soo onnn
    int m;
    cin>>m;
    for(int i=0;i<m; i++){
        char c;
        cin>>c;
        cout<<hash[c - 'a']<<endl;
    }
    return 0;
}