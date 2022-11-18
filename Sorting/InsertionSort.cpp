#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int size){
  for(int i=0; i<=size-1 ;i++){ 
   
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
	int n =5;
	int arr[n] = {1, 2, -1, 6, 3};

	InsertionSort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}