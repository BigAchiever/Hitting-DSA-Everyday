#include <bits/stdc++.h>
using namespace std;

int orderAgnosticBS(int arr[],int n, int target){
	int start = 0;
	int end = n-1;

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

	int ans = orderAgnosticBS(arr,n, target);
	cout<<ans;
}