#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1; i<=(2*(n-1)-1); i++){
        for(int j=1; j<=(n-1); j++){
            if((i == 1) || i == (2*(n-1)-1)){
                cout<<"*";
            }
            else{
                if(i%2 == 0){
                    cout<<" ";
                }
                else if((j==1) || (j==(n-1))){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}