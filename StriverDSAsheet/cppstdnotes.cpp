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
    //different initialization for the vectors are begin, end, reverse end and reverse begin
    vector<int> :: iterator i1 = v.begin();// begin will point to the first element
    vector<int> :: iterator i2 = v.end(); // end will point to the element right after the last element so use it-- in order to start with the ending
    vector<int> :: reverse_iterator i3 = v.rbegin();// it will point to the last element
    vector<int> :: reverse_iterator i4 = v.rend();// it will point to the element before the first element think about in reverse for the end

    //if you want to print the last element immediately
    cout<<v.back();

    //Now how to loop through the vector and print each and every element
    for(vector<int>:: iterator it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<endl;
    }

    //easiet method to parse through vector is 
    for(auto ib :v4){
        cout<< ib<<" ";
    }
    //instead of saying vector<int>:: iterator or reverse_iterator it we can just say auto it : v.begin() just let the compiler figure out the data type of iterator
    // there are 3 types of iterator (iterator, reverse_iterator, constant_iterator)
    // constant_iterator does not allow to make any kkind of changes 

    /// Using index and value
    for (int i = 0; i < v.size(); ++i) {
        cout << i << ": " << v[i] << endl;
    }

    vector<int> v5 = {10,20,30,40};
    // here vector<int> :: iterator is replaced with auto
    for (auto it = v5.rbegin(); it != v.rend(); ++it)
    {
        cout << *it << " ";
    }
    // MOdify elements use &
    for(auto &x: v){
        x+= 5;
        cout<<x<<" ";
    }
    ///Deletion and Erase in Vector
    v4.erase(v4.begin());
    
    v4.erase(v4.begin()+1, v4.begin()+3);

    //Insert function
    //any of these parsing functions can be used to insert the values in the vector just use cin instead of cout and while using auto use & 

    v4.insert(v4.begin(), 40); //insert at the starting  place
    v4.insert(v4.begin()+1, 50);// insert at the second place

    // what if we want to enter vector inside a vector so
    vector<int> copy(5, 20);
    v4.insert(v4.begin()+2, copy.begin(), copy.end());//where to copy in v4 from which part to which part

    //check the size of any vector
    cout<<v4.size(); // we can also use this in the iteration while using the index 
    
    //pop the last element from the vector
    v4.pop_back();

    //if we want to swap the vectors 
    v1.swap(v4); // we can also do this while initialization

    //clear the vector
    v4.clear(); //erases the entire vector

    // to check if the vector are empty or not 
    v4.empty() // this can be used to check the condition


    return 0;
}