#include <iostream>
using namespace std;

int main(){
    int a, b, c, count;
    count = 0;
    cin>>a;
    if(a>5){
        b = a%5;
        if(b != 0){
            c = a-b;
            count += c/5;
            count += 1;
            cout<<count;
        }
        else{
            count += a/5;
            cout<<count;
        }
    }
    else{
        cout<<1;
    }
    return 0;
}