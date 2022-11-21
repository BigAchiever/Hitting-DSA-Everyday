#include<iostream>
#include<stack>

// Container adaptors - are those containers which puts some constraints on the process of storage and retrieval
// Shadi ki plates ka ex sey samajh jao!
// LIFO based 
// https://www.geeksforgeeks.org/stack-in-cpp-stl/

using namespace std;
int main(){
    stack<string> s;
    s.push("Danish");
    s.push("Ali");
    s.push("Siddiqui");

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();
    cout<<"Nowthe top element: "<<s.top()<<endl;

}