#include<bits/stdc++.h>
using namespace std;

// so before this we have done hashing using array but we know that even if we get the time complxity as O(1)
// due to pre computation we get a space complexity of O(10^7)inside main function and O(10^9) outside main function
// so to reduce this we will use map and sets
// also find the limits of array hashing

int main(){
    map<int, int> mpp;   //pairs based on sorted and unique keys
    int b,c;
    cin>>b;
    for(int i=0; i<b; i++){
        cin>>c;
        mpp[c]++;
    }
    for(auto it: mpp){   //iterating pairs available in maps
        cout<<it.first<<" "<<it.second<<endl;  
    }
    int d,e;
    cin>>d;
    for(int j=0; j<d; j++){
        cin>>e;
        cout<<mpp[e]<<endl;
    }

    return 0;
}