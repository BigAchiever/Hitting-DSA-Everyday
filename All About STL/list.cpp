#include<iostream>
#include<list>
// list are sequential containers that allow non-contiguous memory allocation
// have slow traversal like vectors
// implements a  linked list and cannot perform similar operations to vectors and deque

using namespace std;
int main(){
    list<int> l;
    list<int> n(3, 100);
    for(int i: n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());

    for(int i : l){
        cout<<"After erase: "<<i<<" ";
    }
}