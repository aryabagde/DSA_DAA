#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, output;
    cin>>n;
    output = 0;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        if(a+b+c >= 2){
            output += 1;
        }
    }
    cout<<output;

    return 0;
}