#include <bits/stdc++.h>
using namespace std;

//going to do the most optimal method later can do the good and better version
// the good version would be first sort the element and then check for the first greater element in comparison to the first element
// and the better version would be first find the smallest element O(n) and then parse through vector again and check for the smallest element but not exactly equal to the smmallest element in O(2n)

// the most optimal method would be of O(n) if u find the most smmallest element the most current will be converted into the second smallest element

void findsecondsmallest(vector <int> &v){
    int smallest = v[0];
    int secondsmallest = INT_MAX;
    for(int i=0; i<v.size(); i++){
        if(v[i]<smallest){
            secondsmallest = smallest;
            smallest = v[i];
        }
        else if(v[i]<secondsmallest && v[i]!=smallest){
            secondsmallest = v[i];
        }
    }
    cout<<secondsmallest<<endl;
}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    findsecondsmallest(v);
    return 0;
}