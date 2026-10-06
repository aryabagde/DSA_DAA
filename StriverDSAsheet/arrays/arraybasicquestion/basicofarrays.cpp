#include <bits/stdc++.h>
using namespace std;

void largest_value(vector<int> &arr){
    int max = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max<<endl;;
}


int main(){
    //size of array in main function is 10^6 and outside main that is globallyy 10^7
    //also if an array is initialized in main function it will have garbage values
    //but if it is initialized globally than it will have all the values set to 0
    //array can have any data type but all the elements should be homogenous
    // all the elements are stored in a contiguous memory location and we don't know the starting location 
    // but it goes as base location + (size of each element * i)
    

    //practising vectors
    
    //Basic vector initialization

    vector<int> v;
    //vector<int> v(size);
    vector<int> v1(5); // this will initializze vector of size 5 all with the values equal to 0
    vector<int> v2(7, 3); //this will initialize vector of size 7 all with the values equal to 3
   
    vector<int> v3 = {2,34,5,6,3}; // if we just want to initialize with values

    //Adding values
    v1.push_back(4); //adding value in the ending of a vector

    v1.insert(v1.begin()+2, 88); // adding value 88 at the 2nd position fromm the starting of the vector
    // and all the remaining values on the right will be shifted more towards the right

    //Accessing the elements
    v1[2];
    v1.front();
    v1.back();

    //Checking the size of the vector

    v1.size();

    //finding the largest element in a vector

    int n; 
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
   
    return 0;
}