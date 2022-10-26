#include <bits/stdc++.h>
using namespace std;

int factorial(int n){

	int fact = 1;
	for(int i =1; i<=n; i++){
		fact = fact * i;
}
return fact;
}

int nCr(int n, int r){
	int a , b;
	cin>>a>>b;
	int num = factorial(n);
	int denom = factorial(r) * factorial(n-r);

return num/denom;
}

int main(){
	

	int ans = nCr();
	cout<<ans;
	 ans = nCr();
	cout<<ans;
	 ans = nCr();
	cout<<ans;

}