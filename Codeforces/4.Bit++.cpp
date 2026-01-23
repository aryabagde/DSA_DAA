#include <iostream>
using namespace std;

int main(){

    int n, count;
    string nam;
    count = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>nam;
        if(nam[0] == 'X'){
            if(nam[1] == '+'){
                count += 1;
            }
            else{
                count -= 1;
            }
        }
        else{
            if(nam[0] == '+'){
                count += 1;
            }
            else{
                count -= 1;
            }
        }
    }
    cout<<count;

    return 0;
}