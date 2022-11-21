// CPP Prodeqram to implement Deque in STL
#include <deque>
#include <iostream>

// A deque according to me is a container which can perform operations from front and back both and faster.
// A deque is similar to vector but a deque does not store memory in contiguous memory blocks like vector.
// Insertion and deletion can be done form both front and rare

using namespace std;

void show(deque<int> deq)
{
    deque<int>::iterator it;
    for (it = deq.begin(); it != deq.end(); ++it)
        cout  <<*it<<" ";
    cout << '\n';
}

int main()
{
    deque<int> deq1;
    deq1.push_back(10);
    deq1.push_front(20);
    deq1.push_back(30);
    deq1.push_front(15);
    cout << "The deque deq1 is : ";
    show(deq1);

    cout << "\ndeq1.size() : " << deq1.size();
    cout << "\ndeq1.max_size() : " << deq1.max_size();

    cout << "\ndeq1.at(2) : " << deq1.at(2);
    cout << "\ndeq1.front() : " << deq1.front();
    cout << "\ndeq1.back() : " << deq1.back();
    cout<<"\nSize : "<<deq1.size();

    cout << "\ndeq1.pop_front() : ";
    deq1.pop_front();
    show(deq1);

    cout << "\ndeq1.pop_back() : ";
    deq1.pop_back();
    show(deq1);

    cout<<"Checking element: "<<deq1.at(0)<<endl;


    deq1.erase(deq1.begin(), deq1.begin()+1);
    cout<<"Size after erasing: "<<deq1.size()<<endl;
    for(int i:deq1){
        cout<<"Elements"<<i<<endl;
    }


    return 0;
}
