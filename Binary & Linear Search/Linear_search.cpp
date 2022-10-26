#include <iostream>
using namespace std;

int search(int arr[],int n,int key){
	for(int i = 1; i <= n; i++){
		if(arr[i]==key){
// We can also return true and false id we are taking fonction as bool
			return i; 
		}
	}
	return -1;
}


int main (){
int n, key;
cin>>n;

int arr[20];
	for(int i =1;i <= n;i++){
 	// Taking input from the array
		cin>>arr[i];
}

cin>>key;

// storing in the variable and giving params to func
int found = search(arr, n ,key); 

if(found == -1){
	cout<<"Key is not present";
}
else{
	cout<<"Key is present at index "<< found <<endl;
}

}