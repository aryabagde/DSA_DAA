#include <iostream>
#include <string>

using namespace std;

int main(){

    string inp;

    cin>>inp;
    inp[0] = (char) toupper(inp[0]);
    cout<<inp;
    return 0;
}