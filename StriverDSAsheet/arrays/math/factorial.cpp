#include <iostream>
using namespace std;

int fact(int n){
    if(n == 1) return 1;
    else{
        n = n * fact(n-1);
    }
    return n;
};

int main(){
    int n;
    cin>>n;
    n = fact(n);
    cout<<n;
    return 0;
}