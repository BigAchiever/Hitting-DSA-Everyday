#include <iostream>
#include<map>
using namespace std;
// https://www.youtube.com/watch?v=gUrfXZ0hqoA&list=PLauivoElc3gh3RCiQA82MDI-gJfXQQVnn&index=6

void print(map <int, string> &m){ //&mso the copy doesn't pass
for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    map<int, string> m;
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
    if(it!=m.end()){
// Will throw segmentation fault if key is not present sowe put if condition       
        m.erase(it); 
    }
    

//    print(m); 

}