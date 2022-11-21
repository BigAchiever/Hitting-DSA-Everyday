#include<iostream>
#include<map>

// sorted ordermey store hoti hain
// associative containers - Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity). 
/*key value anda mapped value where a key can only refer to a map value but 
map value can refer to other keys too.*/ 

using namespace std;
// TC on insertion and accessing is O(log(n))
int main(){
    map<int, string> m;
    m[1] = "Danish";
    m[2] = "Ali";
    m[13] = "Siddiqui";
    m.insert({4, "afg"}); // another way of inserting elements
    m[2] = "hasan"; // cannot store duplicate keys, will replce the old key

    map<int, string> :: iterator it;

    // Long iterator
    for(it = m.begin(); it!= m.end(); it++){
        // cout<< (*it).first<< " "<<(*it).second<<endl;;
        cout<<it->first<<" "<<it->second<<endl;
    }

    // Short iterator
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }


}