#include<iostream>
using namespace std;
int main(){
	int amount;
	cin>>amount;

	int Rs100,Rs50,Rs20,Rs1;
	// while(true){
	if(amount>=100){
		Rs100 = amount / 100;
		// cout<<amount<<endl;
		amount = amount%100;
		cout<<Rs100<<endl;

	}
	if(amount>=50 && amount<100){
		Rs50 = amount / 50;
		// cout<<amount<<endl;
		amount = amount % 50;
		cout<<Rs50<<endl;
	}

	if(amount>=20 && amount<50){
		Rs50 = amount / 20;
		// cout<<amount<<endl;
		amount = amount % 20;
		cout<<Rs20<<endl;
	}

	if(amount>=1 && amount<20){
		Rs50 = amount / 1;
		// cout<<amount<<endl;
		amount = amount % 1;
		cout<<Rs1<<endl;
	}
// }
}