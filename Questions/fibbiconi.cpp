#include<iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 1;
	int c , n;
	cin>>n;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i =2; i <= n; i++){
		c = a + b;
		cout<<c<<endl;
		a = b;
		b = c;

	}
}