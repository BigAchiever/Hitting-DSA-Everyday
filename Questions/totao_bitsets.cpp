#include<iostream>
using namespace std;
// bitsets is the bits in 1's
int decimal_to_binary(int b){
	int count = 0;
	while(b!=0){
		
		if(b & 1){
			count++;
		}
		b = b>>1;
	}
	return count;
}

int decimal_to_binary2(int a){
	int count = 0;
	while(a!=0){
		
		if(a & 1){
			count++;
		}
		a = a>>1;
	}
	return count;
}

int main(){
	int a, b;
	cin>>a>>b;
	int ans1=decimal_to_binary(a);
    int ans2=decimal_to_binary2(b);
  	cout<<"Set bits of A="<<ans1<<endl;
  	cout<<"Set bits of B="<<ans2<<endl;
  	int ans=ans1+ans2;

  	cout<<"Total set bits of A and B are ="<<ans<<endl;
}