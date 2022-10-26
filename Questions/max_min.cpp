#include<bits/stdc++.h>
using namespace std;

int getMax(int nums[], int n){

	int mx = INT_MAX;

	for(int i =0; i<n ;i++){
		if(nums[i] < mx){
			mx = nums[i];
		}
	}
	return mx;
}

int getMin(int nums[], int n){

	int mn = INT_MIN;

	for(int i =0; i<n ; i++){
		if(nums[i] > mn){
			mn = nums[i];
		}
	}
	return mn;
}

int main(){
	int n;
	cin>>n;
	int arr[10];

	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}

	cout<< "Maximum is " <<getMax(arr, n) <<endl;	
	cout<< "Maximum is " <<getMin(arr, n) <<endl;

}