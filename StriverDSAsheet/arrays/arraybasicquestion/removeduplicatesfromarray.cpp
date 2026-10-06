#include <bits/stdc++.h>
using namespace std;

//remove the duplicates from a sorted array such that only unique values remain

void goodmethod(int arr[], int n){
    set<int> st; // now sets are unique and sorted but the time complexity is O(logn) for 1 element since underneath it's just a red black tree
    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }
    // how to iterate through vector and sets using iterator
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;

    // now i want to change the original array using the set
    int index =0;
    for(auto it: st){
        arr[index] = it;
        index++;
    }

    // so the total time complexity will be O(nlogn + n) from array to set and then again set to array
}

void optimalsolution(int arr[], int n){
    //using two pointer methods
    int i =0, j=1;
    while(j<n){
        if(arr[j] == arr[i]){
            j++;
            continue;
        }
        else{
            i++;
            arr[i] = arr[j];
            j++;
        }
    }
    cout<<i+1<<endl; // U can never resize an array so the best u can do is to conver the rest of the elements into 0 or -1
    for(int k=0; k<n; k++){ // so the logic is correct i can use vector and resize it but it will increase the space complexity now 
        cout<<arr[k]<<" "; // using vectors i could have done resize or pop_back method to remove till the index i
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //goodmethod(arr, n);
    optimalsolution(arr, n);
    return 0;
}