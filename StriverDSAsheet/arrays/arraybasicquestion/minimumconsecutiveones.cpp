#include <bits/stdc++.h>
using namespace std;

// find the maximmum consecutive ones

void better(vector<int> &v){ // now u may think that this is O(n^2) but it is O(n) since value i is passing throught the vector only once there is no repetition, even in while i keeps moving forward  
    int maxvalue =0;
    for(int i=0; i<v.size(); i++){
        int count=0;
        while(i<v.size() && v[i] == 1){   // here i faced an error saying that the increment of i was being unchecked which lead to increment beyond the size of vector
            count++;
            i++;
        }
        maxvalue = max(count, maxvalue);
    }
    cout<<"max value is "<<maxvalue<<endl;
}

void better2(vector<int> v){
    int maxvalue =0;
    int count =0;
    
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            count++;
            maxvalue = max(count, maxvalue);
        }
        else{
            count = 0;
        }
    }
    cout<<"max value is "<<maxvalue<<endl;
}


int main(){
    // as we can see the input is not specifying the size of vector or array
    // so we will use vector and this is the method for inputs if they are space separated
    // 1 2 3 4 5 
    // then int x
    //while(cin>>x){
    //   v.push_back(x);       
    //}
    // if u want multiple vectors line wise then use vector<vector<int>> ok?

    vector<int> v1;
    int x;

    while(cin>>x){
        v1.push_back(x);
    }
    better(v1);
    return 0;
}