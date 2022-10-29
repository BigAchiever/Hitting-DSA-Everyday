#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];// 2^3^1^6^3^6^2
    }
    return ans;
}

int main(){
	int size;
	cin>>size;
	int arr[10];
	for(int i =0;i<size;i++){
		cin>>arr[i];
	}

	int uniques = findUnique(arr, size);
	cout<<uniques;
}