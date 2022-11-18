#include<iostream>
using namespace std;

void Bubble(int arr[], int n){
	bool swapped = false; // if already sorted array

	for(int i =0;i<n;i++){
		swapped = false;
		for(int j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
				swapped = true;
			}
		}
		// if you do not swap for a particular value of i
		if(swapped == false){
			break;
		}
	}
}

int main(){
	int n =5;
	int arr[n] = {2, -3, 0, 9, -1};
	Bubble(arr,n);
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
}