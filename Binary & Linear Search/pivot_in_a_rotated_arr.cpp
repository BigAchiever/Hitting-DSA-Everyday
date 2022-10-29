#include <iostream>
using namespace std;

int pivot(int arr[], int n){
	int start = 0;
	int end = n-1;
	int mid = start + (end - start)/2;

	while(start < end){
		if(arr[mid]>= arr[0]){
			start = mid + 1;
		} 
		else {
			end = mid;
		}
		mid = start + (end - start)/2;
	}
	return start;
	// return end;is also okay !
}

int main(){
	int arr[5] = {7, 8, 5, 1, 2 };
	int getPivot = pivot(arr, 5);
	cout<<getPivot<<endl;
}