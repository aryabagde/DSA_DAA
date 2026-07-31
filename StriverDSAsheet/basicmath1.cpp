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

void armstrong(int n){
    int arm = 0;
    int m = n;
    while(m>0){
        int rm = m%10;
        arm += pow(rm, 3);
        m = m/10;
    }
    if(arm == n) cout<<"Yes";
    else cout<<"NO";
}

void print_divisor(int n){    // time complexity is O(n)
    for(int i=1; i<=n; i++){
        if(n%i == 0) cout<<i<<" ";
    }
}

void print_divisor_half(int n){  //time complexity is O(sqrt of n)
    vector<int> v;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            v.push_back(i);
            if((n/i)!= i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());       // time complexity is O(i log i) where i is the number of factors
    for(auto it: v){
        cout<<it<<" ";
    }
}

void brute_force_prime(int n){  //time complexity is O(n)
    int count = 0;
    for( int i = 1; i<=n; i++){
        if(n%i == 0) count++;
    }
    if(count == 2) cout<<"yes";
    else cout<<"no";
}

void better_prime_count(int n){ //time complexity is O(sqrt(n))
    int count=0;
    for(int i =1; i<=sqrt(n); i++){
        if(n%i ==0){
            count++;
            if((n/i)!=i) count++;
        }
    }
    if(count ==2)cout<<"prime";
    else cout<<"not prime";
}

int main(){
    int n;
    cin>>n;
    //extraction_of_digits(n);
    //count_digits(n);
    //count_log(n);
    //reverse_num(n);
    /// palindrome(n);
    //armstrong(n);
    //print_divisor(n);
    //print_divisor_half(n);
    //brute_force_prime(n);
    better_prime_count(n);
    return 0;
}