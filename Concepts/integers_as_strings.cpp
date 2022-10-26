#include <iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int last_dig = s[s.size()-1];
	cout<<last_dig - '0';

}