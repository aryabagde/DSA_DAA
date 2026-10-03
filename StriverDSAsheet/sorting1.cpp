#include<bits/stdc++.h>
using namespace std;

//Selection sort first select and then swap

int main(){
    int s;
    cin>>s;
    int arr[s];
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }


    for(int i=0; i<s-1; i++){   //siince we need it to loop one size less than the array
        int min = i;             // storing index instead of value
        for(int j=i+1; j<s; j++){   //all the elements before that element will be sorted so we don't need to look at them
            if (arr[j]<arr[min]){
                min = j;
            }
        } // after this i will get the smallest value from i to the end of the array
    
        if(min != i){   //swap function
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }

        for(int k=0; k<s; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}