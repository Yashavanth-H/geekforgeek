class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
        int low = 0, high = arr.size() - 1;
        while(low<high){
            int mid = low + (high - low) / 2;
            
            if(arr[mid] < arr[mid+1]){
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return low;
    }
};