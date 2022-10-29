// just a function

int pivotIndex(arr[]) {
        int right = accumulate(nums.begin(),nums.end(),0); 
        int left = 0;

        for(int i =0; i< nums.size(); i++){
            right -= nums[i];
            if(left == right){
                return i;
            }
            left += nums[i];  
        }
        return -1;
}

int main(){
    int nums[6] = {1, 2, 3, 4,5 ,6};
    int pivot = pivotIndex(nums);

    cout<<pivot<<endl;
}