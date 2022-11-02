#include <bits/stdc++.h>
using namespace std;


int findPeakElement(int arr[], int n) {
	int start = 0;
	int end = n-1;

	int mid = start + (end-start)/2;

	while(start <end){
		if(arr[mid]< arr[mid+1]){           
            start = mid + 1;
        }
        else {
             end = mid;
        }  

		mid = start + (end-start)/2;

	}
	return start;
}

int orderAgnosticBS(int arr[],int start, int end, int target){

	// find weather array is sorted in ascending or decending order
	bool isAsc = arr[start]<arr[end];
	// if(arr[start]<arr[end]){
	// 	isAsc = true;
	// }
	// else false;

	int mid = start + (end - start)/2;
	while(start <= end){
		if(arr[mid] == target){
			return mid;
		}
		// if the array is ascending then the below algo will be applied
		else if(isAsc){
			if(target > arr[mid]){
				
				start = mid + 1; 
			}
			else{
				end = mid - 1;//traversing 
			}	
		}

		// if decending then this algo will be applied
		else{
			if(target < arr[mid]){
				
				start = mid + 1;
			}
			else{
				end = mid - 1; //traversing B
			}
		}
		
		//updating the mid after the change
		// mid = (start + end) / 2;
		mid = start + (end-start)/2;
	}
	return -1;
}

int main(){
	int n = 13;
	int arr[13] = {-18, -12, -4, 0, 2, 3, 4, 15, 16, 18, 22, 45, 78};
	int target =  -12;
	int peak = findPeakElement(arr, n);
	int AgnosticBS = orderAgnosticBS(arr, peak, 0, target);
	if (AgnosticBS != -1) {
            return AgnosticBS;
        }
       // try to search in second half
    return orderAgnosticBS(arr, target, peak+1, n - 1);
}