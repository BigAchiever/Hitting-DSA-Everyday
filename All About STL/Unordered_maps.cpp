#include<iostream>
#include<unordered_map>

// If order does not matter in a question then use this data structure
// Inbuilt implementation - // Har ek ki ka hash value calculate kijati hai (hashtables)
// time complexity - //O(1) - average TC
// valid keys datatypes - //  unordered_map<pair <int, string> >m
using namespace std;

void print(unordered_map <int, string> &m){ //&mso the copy doesn't pass
for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    unordered_map<int, string> m;
    m[1] = "abc"; //O(log(n)) m[1] bas likhney sey hojati hai
    m[2] = "bc";
    m[3] = "abssc";
    m[5] = "abmmmc";
    m[10] = "ali";
    
    m[6]; // ye just khali likhney sey and <int, int> hou to zero value assignhojati hai
    auto it = m.find(3); // iterator return karega
    // if(it==m.end()){
    //     cout<<"No Value";
    // }
    // else{
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    print(m);
}