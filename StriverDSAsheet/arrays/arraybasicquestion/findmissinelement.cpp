#include <bits/stdc++.h>
using namespace std;

//Problem statement is: we are given a sorted arrayy and u need to find one missin element from the sequenc

void bruteforce(int arr[], int n){
    //it will be o(n^2) 
    //just take an element from the counting and check if it is present in array or not
    int flag;
    for(int i =1; i<=n; i++){
        flag =0;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<"value"<<i<<"is missing"<<endl;
        }
    }

}

void better(int arr[], int n){   //with O(n)
    int temp[n+1] = {0};
    for(int i=1; i<=n; i++){
        if(i != arr[i-1]){
            cout<<"value"<<i<<"is missing"<<endl;
            break;
        }
    }
}  

void better2(int arr[], int n){   // actual array hashing
    int hash[n+1] = {0};           // hashing would be great if they are not sorted

    for(int i = 0; i < n-1; i++){
        hash[arr[i]] = 1;
    }

    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            cout << "value " << i << " is missing" << endl;
            break;
        }
    }
}

void optimal(int arr[], int n){
    // as we know the number is starting from 1 we can calculate the summation of all the value and how much it should be and then subtract
    int actual = n*(n+1)/2;
    int sum=0;
    for(int i= 0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"value "<<sum-actual<<" is missing"<<endl;
}

// it is a bitwise operator checks bitwise which are same or not 
// so for 3^3 will give us 0 since all the bits are same
// if we do 3^0 it will give us 3
// it is bitwise xor

// so for the logic we want a temp array suppose size = 4 then [1,2,3,4]and perform bitwise 

void optimal2(int arr[], int n){
    int xor1=0, xor2=0;
    for(int i=0; i<n; i++){
        xor1 = xor1^arr[i];
    }
    for(int i=1; i<=n-1; i++){
        xor2 = xor2^i;
    }
    cout<<(xor1^xor2);
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //bruteforce(arr, n);
    //better(arr, n);
    optimal(arr, n);
    optimal2(arr, n);
    return 0;
}