#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////   Hashing   /////////////////////
// Whenever you need to remember information you've already seen so that you can answer future questions quickly, think of hashing.
// A hash table is simply a data structure that stores key->value pairs which will help us to find the values in O(1) instead of for looping and getting answer in O(n)

//For hashing we will use ordered, unordered MAP and SET and Array

//in order to save time complexity we will do some pre computation instead


//suppose u are given an array and u need to find how many times each number is represented in an array
//so the basic method would be to initialize that many size of array
// example the array is {2,3,1,2,1,2,12}
// so initalize an array of size 13 or 12 based on 0 logic
int main(){
    //input will be n: size of array then the array inputs 
    //then m:  the no of questions like how many times 2 appears in the above array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // so in order to reduce the time complexityO(n x m) to calculate for m  questions we will precompute for all of them
    int hash[*max_element(arr, arr+n)+1] = {0};
    for(int j=0; j<n; j++){
        hash[arr[j]]++;
    }

    int m, l; 
    cin>>m;
    for(int k=0; k<m; k++){
        cin>>l;
        cout<<hash[l]<<endl;
    }

    


    return 0;
}