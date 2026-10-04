#include <bits/stdc++.h>
using namespace std;;

//find second largest element in an array or vector
// tell me good, better and optimal solution

void goodmethod(vector<int> &v){   //time complexity will be O(nlogn + n) for sorting and then checking for the second largest from the end of an array
    sort(v.begin(), v.end()); //but sorting the vector will not give us the guarantee that the second last element is the second largest element if repetation of the values is allowed
    int slargest = v.back();
    for(int i=v.size()-1; i>=0; i--){ // faced an indexing bug due to v.size()-1 instead of v.size()
        if(v[i] != slargest){
            slargest = v[i];
            break;
        }
    }
    cout<<slargest<<endl;
}

void bettermethod(vector <int> &v){
    // first i'll look for the largest element
}


int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    goodmethod(v);
    bettermethod(v);
    return 0;
}