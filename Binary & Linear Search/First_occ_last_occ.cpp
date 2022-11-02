#include <bits/stdc++.h> 

int FirstOccurrence(vector<int>& arr, int n, int key){
 // Write your code here
    //  Code for first occurrence
    int start = 0, ans = -1;
    int end = n-1;
    
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(arr[mid]==key){
// We are storing the ans and kept moving to the mentioned side till the time ans != mid
            ans = mid;
            end = mid - 1; // finding the first occurence from moving toward left
        }
        else if(key > arr[mid]){  // right mein jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left mey jao  
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int LastOccurrence(vector<int>& arr, int n, int key){
 // Write your code here
    //  Code for first occurrence
    int start = 0, ans = -1;
    int end = n-1;
    
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1; // finding the occurence from moving toward right
        }
        else if(key > arr[mid]){  // right mein jao
            start = mid + 1;
        }
        else if(key < arr[mid]){  // left mey jao  
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
       pair<int, int>p;
       p.first = FirstOccurrence(arr, n, k);
       p.second = LastOccurrence(arr, n, k);
    
    return p;
    
} 