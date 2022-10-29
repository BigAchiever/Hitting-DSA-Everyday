#include <bits/stdc++.h>

int pivot(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid]>= arr[0]){
            s = mid + 1;
        } 
        else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
    // return end;is also okay !
}

int binary_search(vector<int>& arr, int s, int e, int key){
    int start = s;
    int end = e;

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

int findPosition(vector<int>& arr, int n, int k)
{
    int getPivot = pivot(arr, n);
    if(k >= arr[pivot] && k <=arr[n-1]){
        return binary_search(arr, pivot, n-1, k);
    }
    else{
        return binary_search(arr, 0, pivot - 1, k);
    }
}