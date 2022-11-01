#include <iostream>
using namespace std;

/* *****
    ***
    b*
    ***
   *****   */


//ulta chala do 
void pattern_rev(int n){

    // row wala loop >1 to skip the single star print in a row
  for(int row = n; row>1;row-=2){

    //printing the space and kept decreasing the value as row changes
    for(int space = n-row; space > 0; space--){
      cout<<" ";
    }

    //col wala loop for stars
    for(int col = row; col > 0; col--){
      cout<<"* ";
    }

    cout<<endl;

  }
}


void pattern(int n){

  //+=2 for skipping even number star rows
  for(int row =1; row<=n;row+=2){


    for(int space = n-row; space > 0; space--){
      cout<<" ";
    }

    for(int col =1; col<=row; col++){
      cout<<"* "; // space imp here in string
    }

    cout<<endl;
  }
}


int main() {
  int num;
  cin>>num;
  
  //calling the functions
  pattern_rev(num);
  pattern(num);

}