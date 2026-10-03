#include<bits/stdc++.h>
using namespace std;

int main(){
   int m; 
   cin>>m; 
   int arr[m];
   map <int, int> mp;
   for(int i=0; i<m; i++){
        cin>>arr[i];
        mp[arr[i]]++;
   }

   //hashing


   int n;
   cin>>n;
   while(n--){
    int inp;
    cin>>inp;
    cout<<mp[inp]<<endl;
   }
    return 0;
}