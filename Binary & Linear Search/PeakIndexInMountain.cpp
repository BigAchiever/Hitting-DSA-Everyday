/* peak
   /\
  /  \  Ex Mountain we have to find the Peak/maximum element in this question
s/    \
       \e
*/
// Using binary search
    int peakIndexInMountainArray(vector<int>& arr) {
        int end = arr.size()-1; // end index
        int start = 0;
        int mid = start + (end-start)/2;  // taking out the mid ele

        while(start<end){
        // climbing the mountain from left side and comparing the elements
        if(arr[mid]<arr[mid + 1]){
            start =mid + 1;
            }
        else{
// because we cannot do end = mid - 1 it will move to the section from where we climbed    
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}