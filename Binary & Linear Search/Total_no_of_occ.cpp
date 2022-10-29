#include <iostream>
using namespace std;

/* To find total number of occurrences 
I converted vector to an array and then I just wrote the main function.
*/

int FirstOccurrence(int arr[], int n, int key){
 // Write your code here
    //  Code for first occurrence
    int start = 0, ans = -1;
    int end = n-1;
    
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(arr[mid]==key){
// We are storing the ans and kept moving to the mentioned side till the time ans != mid
            ans = mid;
            end = mid - 1; // finding the occurence from moving toward left
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

int LastOccurrence(int arr[], int n, int key){
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

// void totalOccurrence(){

// }
int main()
{
	int n;
    cin>>n;
    int arr[7]={1,2,3,12,12,12,12};
    cout << "First occurance index is " << FirstOccurrence(arr, n, 12) << endl;
    cout << "last occurance index is " << LastOccurrence(arr, n, 12) << endl;
    	
        int m,q;
        m = LastOccurrence(arr,n,12);
        q = FirstOccurrence(arr,n,12);


        int total_occurrence = (m-q) + 1;
        cout << endl;
        cout << "total number of occurrences "<< total_occurrence << endl;
    return 0;
}