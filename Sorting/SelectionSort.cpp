#include<bits/stdc++.h>
using namespace std;

// Sorting it using min elements

void SelectionSort(int arr[],int size){
	for(int i = 0; i < n-1; i++ ) {
        int minIndex = i; // storing the 0 index ele here
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) // checking to find the min index
                minIndex = j; // storing the ele and checkin till weget min ele
            
        }
        if(minIndex != i){ // checking if they are not equal
        swap(arr[minIndex], arr[i]);
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