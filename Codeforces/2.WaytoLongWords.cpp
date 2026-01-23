#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int j=0; j<n; j++){
        string txt, fin;
        cin>>txt;

        if(txt.length() >10){
            fin = txt[0] + to_string(txt.length()-2) + txt[txt.length()-1]; // to append and to concatenate is different
        } // and to_string is a function to convert number to a string
        else{
            fin = txt;
        }

        cout<<fin<<endl;
        }
    
    return 0;
}   