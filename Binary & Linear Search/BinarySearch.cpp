#include<iostream>
using namespace std;

//https://leetcode.com/problems/binary-search/solutions/423162/binary-search-101/

int binary_search(int arr[], int n, int key){
	int start = 0;
	int end = n-1;

	// int mid = (start + end) / 2

	// This will eliminate the error if the integer is in range of 2^31
	// because 2^31 -1 + 2^31 - 1 is too big when added
	int mid = start + (end-start)/2;

	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}

		else if(key > arr[mid]){
			start = mid + 1; //traversing 
		}
		else{
			end = mid - 1;
		}
		//updating the mid after the change
		// mid = (start + end) / 2;
		mid = start + (end-start)/2;
	}
	return -1;
}

int main(){
	int n;
	cin>>n;

	int arr[10];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}

	int index = binary_search(arr, n, 5);
	cout<<index;

}