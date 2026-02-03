#include <iostream>
using namespace std;

int main(){
    int k,n,w, cost;
    cin>>k>>n>>w;
    cost = k*(w*(w+1)/2);
    cost = cost - n;
    if(cost>0){
        cout<<cost;
    }
    else{
        cout<<0;
    }
    return 0;
}