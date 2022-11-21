#include<iostream>
#include<queue>

// adaptor conatiner
// Jo counter meysabse phele khada hai wo ticket sabsey phele lega
// FIFO order

using namespace std;
int main(){
    queue<string> q;
    q.push("Danish");
    q.push("Ali");
    q.push("Siddiqui");

    cout<<q.front()<<endl;
    cout<<"Size after pop: "<<q.size()<<endl;


    q.pop();
    cout<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;
}