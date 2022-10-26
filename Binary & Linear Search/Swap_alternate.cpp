#include <iostream>
using namespace std;

int printArray(int arr[], int n){
	for(int i =0;i<n;i++){
		//printing the swapped array
		cout<<arr[i]<<" ";
	}
}

void alternate_swap(int arr[], int n){
// +=2 because we need 2 , 5 to swap and the 6, 1
	for(int i =0 ; i<n; i+=2){
		if(i+1 < n){ //checking if next ele is less than size of array
			swap(arr[i], arr[i+1]); // swapping
			}
		}
}

int main(){
	int n;
	cin>>n;
	int arr[10];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

// calling the functions
	alternate_swap(arr, n);
	printArray(arr, n);
}