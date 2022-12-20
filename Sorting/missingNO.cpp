#include <bits/stdc++.h>
using namespace std;

    int missingNumber(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            // int correct = arr[i] - 1;
            int correct = nums[i];
            if (nums[i] < nums.size() && nums[i] != nums[correct] )
            //element is less than N in case if N is given and if element is not equalt o its index the swap
            { 
                swap(nums[i], nums[correct]);
            }
            else
            {
                i++; // if equal then i moves ahead
            }
        }
    }

int main()
{
     int n= 5;
    int arr[n] = {5, 4, 3, 2, 1};

    missingNumber(arr);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}