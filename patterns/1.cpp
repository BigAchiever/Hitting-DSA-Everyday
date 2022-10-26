#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a = 0;
	int b = 1;
	int c;
	while(n--){
		int var = a;
		c = a +b;
		a = b;
		b = c;

		cout<<c<<" "<<endl;
	}

}