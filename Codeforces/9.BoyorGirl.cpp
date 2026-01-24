#include <iostream>
#include <set>
using namespace std;

int main(){
    //we will use set to load the distinct elements in it, also we don't care about the ORDER of them
    set<char> s;
    string inp;
    int count;
    count =0;
    cin>>inp;

    for(int i=0; i<inp.length(); i++){
        s.insert(inp[i]);
    }
    // in order to print set we need to traverse it using pointer
    // set<char>::iterator it;

    // for(it = s.begin(); it!=s.end(); it++){
    //     cout<<*it;
    // }
    count = s.size(); //remember it's size and not count
    if (count %2 ==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}