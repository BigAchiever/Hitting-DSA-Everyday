#include <iostream>
using namespace std;
/* *****
    ***
    b*
    ***
   *****   */

void pattern_rev(int n){

  for(int row = n; row>=1;row-=2){
    for(int space = n-row; space > 0; space--){
      cout<<" ";
    }
    for(int col = row; col > 0; col--){
      cout<<"* ";
    }
    cout<<endl;
  }
}

void pattern(int n){

  for(int row =1; row<=n;row+=2){
    for(int space = n-row; space > 0; space--){
      cout<<" ";
    }
    for(int col =1; col<=row; col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}


int main() {
  int num;
  cin>>num;
  
  pattern_rev(num);
  pattern(num);



}