

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int ans = -1;
        int low = 0;
        int high = arr.size()-1;
        
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] == key) return mid;
            else if(arr[low] <= arr[mid]){
                if(arr[low] <= key && key <= arr[mid]){
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }
            }
            else if(arr[mid] <= arr[high]){
                if(arr[mid] <= key && arr[high] >= key ){
                    low = mid +1;
                }
                else{
                    high = mid -1;
                }
            }
        }
        return ans;
        
    }
};

