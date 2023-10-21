#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vec; //Declaring a vector of datatype int
    vec.push_back(10); //Inserting element 10 at the end of vec
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    vec.pop_back(); //Deletes the last element of vec

    
    //!!vec.begin() is a pointer pointing the first memory location
    for (auto i = vec.begin(); i != vec.end(); ++i) {//auto is the datatype assigned by the compiler.
        cout << *i << " ";
    }
    cout<<endl;
    

    vec.insert(vec.begin()+2,60); //To insert an element at a particular posiiton in vector 
    //Here at 2nd index i.e. at 3rd position, the element 6 is inserted
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << " ";
    }
    cout<<endl;


    vec.erase(vec.begin()+1); //To delete any element in the vector
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << " ";
    }
    cout<<endl;


    cout<<vec.at(2)<<endl; //Element present at 2nd index of vector is printed


    return 0;
}