#include<iostream>
#include<vector> //pop //front// back //clear->size 0 hoga not capacity
using namespace std;
// Operations:-
//pop //front// back //clear->size 0 hoga not capacity //begin //end //size //etc

/*I have one vector which is filled so now using vector I can make another vector of double size
 and fill all the elements in it, you can see theexample below*/

// vector has theability to increase or decrese its size
// vector is dynamic.

int main(){

vector<int> v;


// vector<int> v1{5, 1}  // size = 5 and initialization with 1 

// vector<int> copy{v1}; // copy of v1 vector with all elements
// for(i:v1){
//     cout<<i<<endl;
// }


cout<<v1<<endl;
// capacity operation tell us the capacity of a we made vector
cout<<"Size: "<<v.capacity()<<endl;

v.push_back(1);
cout<<v.capacity()<<endl;

v.push_back(2);
cout<<v.capacity()<<endl;

v.push_back(3);
// capacity function gets doubled here cuz the vector was filled 
cout<<v.capacity()<<endl;
cout<<"Size: "<<v.size()<<endl; // It will be 3 as the elewhich are entered are 3
  
// v.push_back(4);
// cout<<v.capacity()<<endl;

}