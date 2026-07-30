#include<bits/stdc++.h>
using namespace std;

void extraction_of_digits(int n){ // extracting singular numbers from the given int
    while(n>0){
        int m = n%10;
        cout<<m<<endl;
        n = n/10;
    }
}
void count_digits(int n){
    int count= 0;
    while(n>0){
        count++;
        n = n/10;
    }
    cout<<count;
}

int main(){
    int n;
    cin>>n;
    //extraction_of_digits(n);
    count_digits(n);
    return 0;
}