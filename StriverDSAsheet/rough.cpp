#include<bits/stdc++.h>
using namespace std;

int main(){
   int m; 
   cin>>m; 
   int arr[m];
   map <int, int> mp;
   for(int i=0; i<m; i++){
        cin>>arr[i];
        mp[arr[i]]++;  //done hashing here
   }

   // iterate over map
   for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
   }    // sorted and unique key values
   cout<<"real answer"<<endl;
   int n;
   cin>>n;
   while(n--){
    int inp;
    cin>>inp;
    cout<<mp[inp]<<endl;
   }
    return 0;
}