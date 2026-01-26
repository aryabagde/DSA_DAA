#include <iostream>
using namespace std;

int main(){

    string inp1, inp2;
    int flag;
    flag = 0;
    cin>>inp1>>inp2;
    for(int i=0; i<inp1.length(); i++){
        inp1[i] = (char) tolower(inp1[i]); //if u don't write (char) it will return an ASCII value
    }
    for(int j=0; j<inp2.length(); j++){
        inp2[j] = (char) tolower(inp2[j]);
    }
    for(int k=0; k<inp1.length(); k++){
        if(inp1[k] == inp2[k]){
            continue;
        }
        else{
            if(inp1[k]<inp2[k]){
                flag = -1;
                break;
            }
            else{
                flag = 1;
                break;
            }
        }
    }
    cout<<flag;
    //found 2 erros the first attempt i only calculated for sum of ascii vavlues and it went wrong since ascii value of ab and ba is same so that error
    //second attempt compared each char by char and formed if else and flag situation to solve imp:: forgot to use break statement so even after turning flag 1 it continued in the loop and turned into -1
    return 0;
}