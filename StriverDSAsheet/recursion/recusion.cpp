#include <bits/stdc++.h>
using namespace std;

////////////////////////// Recursion ////////////////////////
// when a function calls itself until a special condition is met
// if there is no special condition the recusion will keep on continuing until the memory runs out 
// it is called stack overflow

//this special condition to stop recursion is called base condition
int cou=0;
void basic(){      // basic recursive function
    if(cou == 4) return;
    cout<<cou<<endl;
    cou++;
    basic();
}

string ch = "Artya";
void name_five(int n){   // time complexity will be O(n)
    int static ct = 1;
    cout<<ch<<endl;
    if(ct == n) return;
    ct++;
    name_five(n);
}

void name_five_without_static(int i, int n){  //time and stack space complexity will be O(n)
    if(i>n) return;
    cout<<ch<<endl;
    name_five_without_static(i+1, n);
}

void print_numbers(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    print_numbers(i+1, n);
}

void print_numbers_reverse(int n){
    if(n <1) return;
    cout<<n<<" ";
    print_numbers_reverse(n-1);
}

void backtrack_print_numbers(int i, int n){      // in backtracking the last person should get executed first then we wil backtrack 
    if(i<1) return;
    backtrack_print_numbers(i-1, n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    //basic();
    //name_five(n);
    //name_five_without_static(1, n);
    //print_numbers(1, n);
    //print_numbers_reverse(n);
    backtrack_print_numbers(n, n);
    return 0;
}