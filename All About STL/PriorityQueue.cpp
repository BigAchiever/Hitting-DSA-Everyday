#include <iostream>
#include <queue>

// https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/

// Container adaptors
/*Is designer in suchh a way that the first element is
either the greatest of the smallest in the queue and elements are in non decreasing order
*/

// Priority queues are built on the top to the max heap and uses array or vector as an internal structure.

using namespace std;
int main()
{   
    // max heap
    priority_queue<int> maxq;

    // min heap
    // In case of min heap it will print smallest element
    priority_queue<int, vector<int>, greater<int>> minq;

    maxq.push(0);
    maxq.push(1);
    maxq.push(2);
    maxq.push(3);

    // for(int i: maxq){
    //     cout<<maxq.top()<<endl; // Wrong meathod in priority queue to iterate
    // }

    // for(int i =0; i<maxq.size(); i++){ //maxq.size()keeps changingevery time loop runs which will not lets all elements print
    //     cout<<maxq.top()<<" ";
    //     // using pop because we want to print all elements one by one
    //     maxq.pop();
    //     // if we won't use popit will print the greatest element all times  
    // }cout<<endl;
    int n = maxq.size();
    for(int i =0; i<n; i++){ //to solve the problem we use n here
        cout<<maxq.top()<<" ";
        // using pop because we want to print all elements one by one
        maxq.pop();
        // if we won't use popit will print the greatest element all times  
    }cout<<endl;

// empty operation---
    for(int i =0;i<n;i++){
        maxq.pop();
    }
    cout<<"Check Empty: "<<maxq.empty();
}