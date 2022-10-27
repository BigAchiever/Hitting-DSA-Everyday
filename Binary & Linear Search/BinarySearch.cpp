#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
	int start = 0;
	int end = n-1;

	int mid = (start + end) / 2;

	while(start <= end){
		if(mid[arr] == key){
			return mid;
		}

		if(key > arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		mid = (start + end) / 2;
	}
	return -1;
}

int main(){
	int n;
	cin>>n;

	int arr[10];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}

	int index = binary_search(arr, n, 2);
	cout<<index;

}