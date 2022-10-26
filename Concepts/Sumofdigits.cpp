#include <bits/stdc++.h>
using namespace std;
int dig_sum(int n){
	int dig_sum= 0;
	// cout<<1234567 / 100;
	while(n){
		int last_digit = n % 10; // finding the last digit
		dig_sum += last_digit;
		n =n/10; // removing the last digit by division
		
	}
	return dig_sum;
}
int main(){
	// Sum of digit 
	int a,b;
	cin>>a>>b;
	
	cout<<dig_sum(a) + dig_sum(b);
}