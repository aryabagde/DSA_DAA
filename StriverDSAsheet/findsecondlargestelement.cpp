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
//always check for pass by reference or value while using vectors
void bettermethod(vector <int> &v){ // time complexityy here is O(2n)
    // first i'll look for the largest element
    int largest = v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i]>largest){
            largest= v[i];
        }
    }
    //now what i want is to check if a value is greater than slargest variable but less than largest element
    int slargest = INT_MIN;
    for(int i=0; i<v.size(); i++){
        if(v[i] > slargest && v[i] != largest){
            slargest = v[i];
        }
    }
    cout<<slargest<<endl;
}

void optimalmethod(vector<int> &v){
    int largest = v[0];
    int slargest = INT_MIN;
    for(int i=1; i<v.size(); i++){
        if(v[i] > largest){              // if i find a value larger than largest than the earlier largest element will become second largest
            slargest = largest;
            largest = v[i];
        }
        else if(v[i]>slargest && v[i] !=largest){   // important case that i missed
            slargest = v[i];                        // case where value is between the largest and the slarges
        }
    }
    cout<<slargest<<endl;

}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    //goodmethod(v);
    //bettermethod(v);
    optimalmethod(v);
    return 0;
}