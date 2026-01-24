#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int i,j, num, m, n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>num;
            if (num == 1){
                m = i;
                n = j;
            }
        }
    }
    cout<<(abs(m-3) + abs(n-3))<<endl;

    return 0;
}