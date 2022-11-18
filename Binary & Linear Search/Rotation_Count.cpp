#include<bits/stdc++.h>
using namespace std;

// There are some errors in code

int countRotations(int arr[]){
	int pivot = findpivot(arr);
	return pivot + 1;
}


//---------Use this when array does not contains duplicates
int findpivot(vector<int>& arr){
	int start = 0;
	int end = arr.size()-1;

	int mid = start + (end-start)/2;

	while(start <= end){
		// 4 cases over here
		if(mid < end && arr[mid] > arr[mid+1])// mid < end so it does not get out of bound
			return mid;
		if(mid > start &&  arr[mid]< arr[mid-1]){
			return mid-1;
		}
		if(arr[mid]<=arr[start]){
			end = mid -1;
		}
		else{ 
			start = mid + 1;
		}
	}
}


//---------Use this when it contains duplicates
int findpivotWithDuplicates(vector<int>& arr){
    int start = 0;
        int end = arr.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            // 4 cases over here
            if (mid < end && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (mid > start && arr[mid] < arr[mid - 1]) {
                return mid-1;
            }

            // if elements at middle, start, end are equal then just skip the duplicates
            if (arr[mid] == arr[start] && arr[mid] == arr[end]) {
                // skip the duplicates
                // NOTE: what if these elements at start and end were the pivot??
                // check if start is pivot
                if (start < end && arr[start] > arr[start + 1]) {
                    return start;
                }
                start++;

                // check whether end is pivot
                if (end > start && arr[end] < arr[end - 1]) {
                    return end - 1;
                }
                end--;
            }
            // left side is sorted, so pivot should be in right
            else if(arr[start] < arr[mid] || (arr[start] == arr[mid] && arr[mid] > arr[end])) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
}


int main(){
	int n = 7
	int arr[n] = {4,5,6,7,0,1,2};
	
	cout<<countRotations(arr);
}