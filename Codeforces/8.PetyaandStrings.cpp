#include <iostream>
using namespace std;

int main(){

    string inp1, inp2;
    int count1, count2;
    count1 =0;
    count2 =0;
    cin>>inp1>>inp2;
    for(int i=0; i<inp1.length(); i++){
        count1 += tolower(inp1[i]);
    }
    for(int j=0; j<inp2.length(); j++){
        count2 += tolower(inp2[j]);
    }
    if(count1<count2 ){
        cout<<"-1"<<endl;
    }
    else if(count1>count2){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }


    return 0;
}