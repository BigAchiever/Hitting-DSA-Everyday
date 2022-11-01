#include<iostream>
using namespace std;

int floor(int arr[], int n, int key){
	int start = 0;
	int end = n-1;

	int mid = start + (end-start)/2;

	while(start <= end){
		if(arr[mid]==key){
			return mid;
		}
		else if(key >arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		mid = start + (end-start)/2;

	}
	return end;
}

int main(){
	int n,key;
	cin>>n;
	cout<<"The index of number that is smaller than equal to target number is: ";
	cin>>key;

	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}

	int found = floor(arr,n,key);
	cout<<found;
}