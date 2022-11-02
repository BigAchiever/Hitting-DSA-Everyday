#include<iostream>
using namespace std;
int binary_search(int arr[], int start, int end, int target){
	// int start = 0;
	// int end = n-1;

	// int mid = (start + end) / 2

	// This will eliminate the error if the integer is in range of 2^31
	// because 2^31 -1 + 2^31 - 1 is too big when added
	int mid = start + (end-start)/2;

	while(start <= end){
		if(mid[arr] == target){
			return mid;
		}

		if(target > arr[mid]){
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

int infinite_search(int arr[], int target){
	int start =0;
	int end = 1;
	while(target > arr[end]){
		int newstart = end+1;

		end = end + (end - start + 1)*2;
		start = newstart;

	}
	return binary_search(arr, start, end, target);
}



int main(){
	int arr[8] = {2, 3, 4, 5, 12, 23, 34, 45 };
	int target = 23;

	cout<<infinite_search(arr, target);
}