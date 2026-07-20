#include <bits/stdc++.h>
using namespace std;

int main(){
    //Pair container
    //definition should be self explanatory
    pair<int, int> p = {1,2};
    cout<<p.first;
    cout<<p.second;
    // we can also do nested pair: pair inside pair

    // we can also do array consisting of pairs
    pair<int, int> arr[]={{1,2}, {3,4}};
    cout<<arr[1].first;
    //Vector container
    //as we know that array's size cannot be changed dynamically 
    // we can use vector in that scenario

    //Now why it's initialization is different than others? array is part of language, it is inbuilt 
    //it is because vector is a class and we are creating an object
    // so it's vector v
    // but since vector class is a template we need to tell it explicitly 
    // which type of data are we going to store so...... vector<int> v;
    //Declaration we don't have to mention the size of vector, it is dynamic in nature
    vector<int> v = {12,23,42};
    // we cannot cout immidiately since we need iterator for it like an array
    vector<pair<int, int>> v2;
    v2.push_back({1,2});
    v2.emplace_back(2,3);// difference is of syntax and speed

    vector<int> v3(5, 30); // means 5 instances of 30
    //what if i want to copy a vector into another vector
    vector<int> v4(v3);

    //how to access the values of vector
    // it is similar to array
    cout<<v4[0];
    //another way is iterator
    vector<int>::iterator i = v.begin(); //initialization for iterator mention what kind of iterator it is like the data type of point then :: and then iterator name equal to the starting position of the vector so it will give the first element of the vector
    cout<<*(i);
    i++;
    cout<<*(i);




    return 0;
}