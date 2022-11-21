#include<iostream>
#include<set>

// Associative Containers
// set stores Unique elements and return element in sorted order
// Sets are slower than Unordered Set which are not even in a sorted order
// Itfollows binary search tree implementation

using namespace std;

int main(){
    set<int> s;
    // s.push(2) no available
    s.insert(2);
    s.insert(2);
    s.insert(2);    // only one 2 will print here
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto i: s){
        cout<<i<<endl;
    }cout<<endl;

    // s.erase(s.begin());   //begin() is a iterator which tells which element to erase
    s.erase(s.begin(), s.end()); 
    for(auto i : s){
        cout<<i<<endl;
    }  

}