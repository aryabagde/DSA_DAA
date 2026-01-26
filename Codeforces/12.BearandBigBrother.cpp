#include <iostream>
using namespace std;

int main(){
    int a,b,count;
    count = 0;
    cin>>a>>b;
    while(a<=b){
        a *= 3;
        b *= 2;
        count++;
        if(a>b) break;
    }
    cout<<count;
    return 0;
}