#include <bits/stdc++.h>
using namespace std;

// Union of two sorted arrays 
// so we need all the elements from first and second array considering that we only take 1 value for the same elements in both of them

void bruteforce(int firstarr[],int n, int secondarr[], int m){   // time complexity is O(n1+n2)(log(n1+n2)) space complexity is O(n1+n2)
    // so the brute force method would be to use a set
    // since they are unique and sorted
    
    // Just wanted to mention that we cannot find the length of an array jjust by using function such as firstarr.length() coz this function does not exists and the reason is while passing through the function it only shared the pointer for the first element
    // and also i cannot use the sizeof(firstarr)/sizeof(firstarr[0]) this is because the elements are not present/initialized in the same scope
    // so either use vector or add the size in the parameter

    set <int> st;
    for(int i=0; i<n; i++){
        st.insert(firstarr[i]);
    }
    for(int j=0; j<m; j++){
        st.insert(secondarr[j]);
    }
    // now createt an array combining sizze of both for the worst case scenario of all are different
    vector<int> v;
    for(auto it: st){
        v.push_back(it);
    }

    for(int k=0; k<v.size(); k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;

}

void optimal(int firstarr[], int n, int secondarr[], int m){
    // we can reduce the space commplexity by just using 
    //2 pointer method
    // since the arrays are already sorted we can use this method

    // i just came to know that we can iterate multiple variable simultaneoously in for loop but there will be only one condition which can be merged with other conditions using && and || so 
    // for(int i=0, int j=0; i<n && j<m; i++, j++)
    // in this case though we do not need to iterate the variables at every step soo we will use while loop

    int temp[n+m];
    int i=0, j=0, k=0;
    temp[k] = INT_MIN;

    while(i<n && j<m){
        if(firstarr[i] == secondarr[j]){
            if (firstarr[i] == temp[k]){
                i++;
                j++;
            }
            else{
                k++;
                temp[k] = firstarr[i];
                i++;
                j++;
            }
        }
        else if(firstarr[i]<secondarr[j]){

        }
    }




}

int main(){
    int n, m;
    cin>>n>>m;
    int firstarr[n];
    int secondarr[m];
    for(int i=0; i<n; i++){
        cin>> firstarr[i];
    }
    for(int j=0; j<m; j++){
        cin>>secondarr[j];
    }
    bruteforce(firstarr, n, secondarr, m);
    optimal(firstarr, n, secondarr, m);
    return 0;
}