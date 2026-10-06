#include <bits/stdc++.h>
using namespace std;

void rev_arr(int arr[], int n){       //basic way to reverse an array
    for(int i=0; i<n/2; i++){
        int temp; 
        temp = arr[i];
        arr[i] =  arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int j=0; j<n; j++){
        cout<<arr[j];
    }
}

void rev_swap_arr(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void rec_rev_arr(int arr[] , int s, int e){  // mistake i commited here is do not write any execution station below return statement
    if(s>=e) return;                         // also there is no need to write return statements since it is a void function except for the base statement
    else{
        swap(arr[s], arr[e]);
        rec_rev_arr(arr, s+1, e-1);      // here earlier i added return function but it doesn't matter coz there is nothing to execute even after the return function so it will return natually
    }
}

void print_arr(int arr[], int n){           // here i wrote the execution statement after the return statement which means
    if(n<0) return;
    print_arr(arr, n-1);             // i shouldn't have written the return statement here!!!!!
    cout<<arr[n];
}

string rev_string(string s){
    int len = s.length();
    for(int i=0; i<len/2; i++){
        swap(s[i], s[len - i-1]);
    }
    return s;
}

void check_palindrom(string s){
    if(rev_string(s) == s) cout<<"palindrome";
    else cout<<" not palindrome";
    cout<<rev_string(s);
}

void another_check_palindrom(string s){
    int flag=0;
    for(int i=0; i<s.length()/2; i++){
        if(s[i] != s[s.length()-i-1]){
            flag=1;
        }
    }
    if(flag==0) cout<<"palindrome";
    else cout<<"not palindrome";

}

bool another_check_palindrom_recursion(int i,string st){
    if(i>=st.length()/2)return true;
    if(st[i] != st[st.length()-i-1]) return false;
    return another_check_palindrom_recursion(i+1, st);
}

int main(){
    int arr[] = {2,3, 5,4};
    //rev_arr(arr, 4);
    //rev_swap_arr(arr, 4);
    //rec_rev_arr(arr,0, 3); //recursive reverse array
    //print_arr(arr, 3);
    int check = 233425;
    string st="madam";
    // rev_string(st);
    //check_palindrom(to_string(check));
    //another_check_palindrom(st);
    bool what = another_check_palindrom_recursion(0, st);
    if(what == true) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}