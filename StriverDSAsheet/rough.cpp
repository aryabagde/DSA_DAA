#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={ 5,75,46,3,2,1};
    vector<int> v2; 
    v2 = v1;
    sort(v2.begin() ,v2.end());
    for(int i=0; i<6; i++){
        cout<<v2[i];
    }
    return 0;
}