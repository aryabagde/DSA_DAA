#include <iostream>
using namespace std;
// IMP tolower toupper and is lower and isupper are functions and do not come under the methods for strings such as object.lengt() bcoz these are for the characters and not the strings
int main(){
    string s;
    int upper=0, lower=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(int j=0; j<s.length(); j++){
            s[j] = (char) toupper(s[j]);
        }
    }
    else{
        for(int k=0; k<s.length(); k++){
            s[k] = (char) tolower(s[k]);
        }
    }
    cout<<s;
    return 0;
}