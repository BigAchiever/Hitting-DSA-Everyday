#include<iostream>
using namespace std;

// used when the unsorted array is from range 0 to N!

void CyclicSort(int n, int arr[]){
    for(int i= 0; i<n; i++){   
        int correct = arr[i] - 1;         
        if(arr[i] != arr[correct]){ // elemennt at i == element at correct index???
            swap(arr[i], arr[correct]);
        }
        else{
            i++; // if equal then i moves ahead
        }
    }
}

int main()
{
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};

    CyclicSort(5, arr);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 
}
