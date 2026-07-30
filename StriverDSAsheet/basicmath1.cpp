#include<bits/stdc++.h>
using namespace std;

void extraction_of_digits(int n){ // extracting singular numbers from the given int
    while(n>0){
        int m = n%10;
        cout<<m<<endl;
        n = n/10;
    }
}
void count_digits(int n){   // counting the number of digits in the number
    int count= 0;              // time complexity is logn base 10 
    while(n>0){                     /// coz division is happening by 10
        count++;
        n = n/10;
    }
    cout<<count;
}

void count_log(int n){  // practicing the use of log
    cout<<(int)(log10(n)+1);
}

int reverse_num(int n){
    int rv=0;
    while (n>0)
    {
        int rm = n%10;
        rv = rv*10 + rm;
        n = n/10;
    }
    return rv;
    
}

void palindrome(int n){ // remember rev of number should be same which means they can also be odd sized
    int r = reverse_num(n);  // remember in the origianl number 
    if(n == r) cout<< true;
    else cout<<false;
}

int main(){
    int n;
    cin>>n;
    //extraction_of_digits(n);
    //count_digits(n);
    //count_log(n);
    //reverse_num(n);
    palindrome(n);
    return 0;
}