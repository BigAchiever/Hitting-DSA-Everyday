// just a function
#include<iostream>
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


int findpivotWithDuplicates(vector<int>& arr){
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

        // IF elements at middle,start, end are equal then
        if(arr[mid]==arr[start] && arr[mid]==arr[end]){
            // skip the duplicates

            // before that check if they are not pivot
            if(arr[start] > arr[start+1]){
                return start;
            }
            start++;

            if(arr[end] < arr[end-1]){
                return end;
            }
            end--;
        }

        // left side is sorted so pivot should be on right
        else if(arr[start] < arr[mid] || (arr[start]==arr[mid] && arr[mid] > arr[end])){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }

    }
}

int main(){
    int arr[8] = {4, 5, 6, 7, 8, 1, 2};
    cout<<findpivotWithDuplicates(arr);
}