#include <iostream>
using namespace std;

int main(){
    int n, anton =0, darik =0;
    char s;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(s == 'A') anton++;
        else darik++;
    }
    if(anton>darik) cout<<"Anton";
    else cout<<"Danik";
    return 0;
}