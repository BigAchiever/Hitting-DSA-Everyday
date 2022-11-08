// just a function
#include<iostream>
using namespace std;

int findpivot(int nums[],int n){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        // 4 cases over here
        if(mid < end && nums[mid] > nums[mid+1]) // mid < end so it does not get out of bound
            return mid;
        if(mid > start &&  nums[mid]< nums[mid-1]){
            return mid-1;
        }
        if(nums[mid]<=nums[start]){
            end = mid -1;
        }
        else{ 
            start = mid + 1;
        }
    }
}

int main(){
    int n = 9;
    int nums[9] = { 4, 6, 7, 8, 9, 10, 1, 2, 3 };
    int pivot = findpivot(nums, n);

    cout<<pivot<<endl;
}