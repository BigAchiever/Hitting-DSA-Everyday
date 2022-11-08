#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int pivot = findpivot(nums);
        //if  you do not find pivot theb it means array is not rotated
        if(pivot == -1){
        	//just do normal binary search
        	return binary_search(nums, target, 0, nums.size()-1)
        }

        if(pivot==target){
        	return pivot;   
        }

        if(target > pivot){
        	return binary_search(nums,target, 0, pivot-1);
        }

        return binary_search(nums,target,pivot+1,nums.size()-1)
}

int binary_search(vector<int>arr, int target, int start, int end){
	// int start = 0;
	// int end = arr.size()-1;

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

int findpivot(vector<int>& arr, int target){
	int start = 0;
	int end = arr.size()-1;

	int mid = start + (end-start)/2;

	while(start <= end){
		// 4 cases over here
		if(mid < end && arr[mid] > [mid+1])// mid < end so it does not get out of bound
			return mid;
		if(mid > start &&  arr[mid]< arr[mid-1]){
			return mid-1
		}
		if(arr[mid]<=arr[start]){
			end = mid -1;
		}
		else{ 
			start = mid + 1
		}
	}
}

int main(){

}