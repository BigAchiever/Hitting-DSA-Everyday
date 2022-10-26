#include <iostream>
using namespace std;
 // Reversing the array
int swap(int arr[], int n){
	int start = 0;
	int end = n-1;
// till the time start and end don't come to a particular point it won't stop
	while(start<=end){ 
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int printArray(int arr[], int n){
	for( int i = 0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n, arr[10];
	cin>>n;
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}

// Calling the functions 
	swap(arr, n);  
	printArray(arr, n);
}