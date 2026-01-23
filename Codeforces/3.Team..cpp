#include <iostream>
using namespace std;

int main(){
    int n, output, count, input;
    cin>>n;
    count = 0;
    output =0;
    for(int i=0; i<n;i++){
        for(int j=0; j<3; j++){
            cin>>input;
            if(input ==1){
                count += 1;
            }
        }
        if(count >= 2){
            output += 1;
        }
        count = 0;
    }
    cout<<output;

    return 0;
}