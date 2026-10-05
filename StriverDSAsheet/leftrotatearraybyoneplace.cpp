#include<bits/stdc++.h>
using namespace std;

//que: rotate the array by one place on the left so for [1,2,3,4,5] it will be [2,3,4,5,1]
 
void rotateleft(int arr[], int n){  //timme complexity for O(n)
    int temp = arr[0];              // space complexity for this algo is O(n) but if they askk how much extra space than O(1)
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;

    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
//this is the optimmal method

void rotateleftbydbrute(int arr[], int n, int d){ // timme complexity will be O(2n) and space complexity will be O(d)
    int temp[d];                                    //brute force method instead of keeping a temp variable for single element we have a temp array
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    // now shifting will take place
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    //now place the remaining values from temp to the original array
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }

    //let's print out to find if it is correct or not
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotateleftbydoptimal(int arr[], int n, int d){  // the most optimal method
    // IMP: there is a huge difference between rotate and reverse function mmake sure to know when to use each of them
    reverse(arr, arr+d);    //inclusive and exclusive in reverse function is [first, last)
    reverse(arr+d, arr+n);  //starting inclusive ending is exclusive
    reverse(arr, arr+n);
    for(int i=0; i<n; i++){ // the time complexity is same O(n) but the space complexityy is O(1) no new space is required for this
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
    int n;;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //rotateleft(arr, n);
    //rotateleftbydbrute(arr, n, 3);
    rotateleftbydoptimal(arr, n, 3);

    return 0;
}