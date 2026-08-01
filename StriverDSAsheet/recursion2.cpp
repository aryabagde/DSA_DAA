#include <bits/stdc++.h>
using namespace std;

//////////////////////// RECURSION 2 /////////////////////////

// imp topic we will learn here is parameterized recursion and functional recursion
// in parameterized we will use parameter for the calculation and is useful if we need stepwise answer
// functional recursion is useful if we want a direct answer from the function

// time complexity here is always O(n)

void sumofnumbers_parameter(int i, int n){ // make sure what kind of recursion function u want whether parameterized or functional or were the recursion head should be 
    if(i<1){
        cout<<n;
        return;
    }
    sumofnumbers_parameter(i-1, n+i);

}

int sumofnumbers_functional(int i,int n){  // this function should be used we are trying to return something
    if(i<n){
        return i + sumofnumbers_functional(i+1, n);
    }
    else return i;
}

int simpler_functional(int n){  // no need to overthink and add multiple parameters over this
    if(n == 0) return 0;
    else return n + simpler_functional(n-1);
}

int fact(int n){           // check befor if u really need a variable
    if(n == 1) return 1;
    else return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    //sumofnumbers_parameter(n ,0);
    //int c = sumofnumbers_functional(1, n);
    //int c = simpler_functional(n);
    int c = fact(n);
    cout<<c;
    return 0;
}