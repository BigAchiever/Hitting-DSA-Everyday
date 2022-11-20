#include<iostream>

// STL array is based on a basic array

#include<array> // stl array
using namespace std;

int main(){
    int basic[3] ={1, 2, 3};


    //  array STL ki implementation upar waley array sey hi hoti haejo fixed size kahi hota hae and static
    array<int , 4> a ={1, 2, 3, 4};
    //   What all we can use in Array STL

    for(int i =0;i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.size()<<endl; 
    cout<<a.at(2)<<endl;
    cout<<a.empty()<<endl;  //no / yes
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
}