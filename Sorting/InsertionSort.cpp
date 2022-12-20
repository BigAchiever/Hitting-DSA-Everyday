#include <bits/stdc++.h>
using namespace std;

// First sort till index number 2 and thne 2 and then 3 and so on
// For every index put that index element at the correct inex of LHS
// Array is sorting in parts with every pass
// In bubble sort biggest element was coming at the correct index, here with every pass LHS is getting sorted

void InsertionSort(int arr[],int size){
  for(int i=0; i<size-1 ;i++){ 
   
    for(int j=i+1; j>0 ;j--){

      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
      }
      else{
      	break;
      }
    }
  }
}


int main(){
	int n =8;
	int arr[8] = {1, 2, -1, 6, 3, 0, 12, -2};

	InsertionSort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}