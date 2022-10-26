#include <iostream>
using namespace std;
// n=3 
int main(){
	int n;
	cin>>n;
	int row =1;
	
	
	
	while(row <= n){
		int col = 1;
		// First triangle
		int first = n-row+1;
		while(col<=first){
			cout<<col;
			col++;
		}

		int space = 2*(row-1);
		while(space){
			cout<< "*";
			space--;
		}

		int second = n-row+1;
		col =1;
		while(col<=second){
			cout<<(n-col-row+2);
			col++;
		}
		cout<<endl;
		row++;
		
	}	
}