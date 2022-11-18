#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int size){
  for(int i=0;i<size-1;i++){ // 0 to n-1/n-i (n-i) is more better
    int minIndex=i; //taking the min index and comparing it with the next element
    for(int j=i+1;j<size;j++){

    // One by one move boundary of
    // unsorted subarray
	    if(arr[j]<arr[minIndex]){
	   		minIndex = j;
	    }

      // Swap the found minimum element
        // with the first element
	    if(minIndex!=i){
	        swap(arr[minIndex], arr[i]);
	    }
      
    }
  }
}


int main(){
	int n =5;
	int arr[n] = {5, 4, 3, 2, 1};
	// getMaxIndex();
	SelectionSort(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}