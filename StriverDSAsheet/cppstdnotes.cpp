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
    v3.swap(v4); // we can also do this while initialization

    //clear the vector
    v4.clear(); //erases the entire vector

    // to check if the vector are empty or not 
    v4.empty(); // this can be used to check the condition


    ////////////////List Container/////////////

    //similar to the vector just has push_front instead of insert 
    //insert is costlier instead of push_front
    list<int> ls= {2,3,4,45,2};
    ls.push_back(5);
    ls.emplace_back(7);
    ls.push_front(1);
    ls.emplace_front(3);
    //rest of the functions are similar to the vector

    //////////////////////Dequeue////////////////////

    //similar to the list and vector only thing is u can pop_back and pop_front using dequeue

    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(5);
    dq.emplace_front(7);
    dq.push_front(8);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rest of the functions are same as vector and list begin, end, rbegin, rend, clear, insert, empty, size, swap

    ////////////////////// STACK ////////////////////////////

    stack<int> st;
    // only 3 things are important in stack top, push and pop
    // remember it follows lifo

    st.push(3);
    st.push(5);
    st.push(9);
    st.push(0);
    st.emplace(5);
    cout<<st.top();
    st.pop();
    cout<<st.size();
    cout<<st.empty();
    //and more functions like swap will also work in this scenario

    /////////////////////////////// QUEUE /////////////////////////////
    //here we can use front, back, 
    queue<int> qt;
    qt.push(3);
    qt.push(7);
    qt.push(8);
    qt.pop();
    qt.pop();

    qt.back();
    qt.front();
    //here instead of top we can access the back and the front

    ////////////////////////////// Priority Queue mainly called as Max Heap/////////////////////////

    // It is like a stack just that the bigger number stays on the top
    // It is not a linear data structure, it is a max heap for minimum priority it will be min heap
    priority_queue<int> pq;

    pq.push(8);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.emplace(0);

    cout<<pq.top();

    pq.pop();
    //other functions are size and empty

    ////////////////////////////////// Minimum Heap //////////////////////////////////////////

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(8);
    pq.push(9);
    pq.push(10);
    pq.top();

    ///////////////////////////////// Set (Sorted and unique) ////////////////////////////////////
    // it is also a non linear data structure such as tree or red black red
    set<int> set;
    set.insert(4);
    set.insert(6);
    set.insert(8);
    set.insert(9);
    
    auto ih1 = set.find(9);
    set.erase(6);
    auto ih2 = set.find(8);
    set.erase(ih1, ih2); // or we can use erase as .erase(start, end)

    ///set has different kinds of function unless the previous container such as
    // find, insert, erase, count

    /////////////////////// MAP and SET are the only containers that have find as a member function or we can say as the methods
    ///////////////////// so for other containers we should use find(start, end, what) function from <algorithm>
    
    //////////////////// LOWER BOUND AND UPPER BOUND ///////////////////////
    // in set
    auto ih3 = set.lower_bound(4); // it will returen the address of the element which is greater than or equal to this value
    auto ih4 = set.upper_bound(4); // it will return the address of the element which is lower than or equal to this
    // since set is unique and sorted the address will be ok

    //////////////////////// MULTISET (only sorted, can store multiple instances ///////////////////////////)
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);
    ms.insert(1);
    ms.insert(1);

    ms.erase(3); //all 3's are erased

    ms.erase(ms.find(2)); // only the first 2 will be erased
    //ms.erase(ms.find(1), ms.find(1)+2);// the first 1 and the second 1 will be erased

    ///////////////////////////////////// Unordered Set (Unique)//////////////////////////
    unordered_set<int> us;
    us.insert(2);
    us.insert(3);
    //here only the lowe and upper bound fundtions doesn't work rest of them is similar to the set container
    // and it will have no order


    ///////////////////////////////////// MAP ////////////////////////////////////////


    return 0;
}