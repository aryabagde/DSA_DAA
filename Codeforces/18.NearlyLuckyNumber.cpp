#include <iostream>
#include <string>
using namespace std;

int luckynumber(int num){
    string value = to_string(num);
    for(int i=0; i<value.length(); i++){
        if(value[i] == '4' || value[i] == '7'){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    long long n;
    int count = 0;
    cin>>n;
    string real_value = to_string(n);
    for(int j =0; j<real_value.length(); j++){
        if(real_value[j] == '4' || real_value[j] == '7'){
            count++;
        }
    }
    int output = luckynumber(count);
    if(output == 0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}