class Solution {
    public:
    int firstOccurance(vector<int>& arr, int target){
        int low = 0, high = arr.size() - 1, result = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == target){
                result = mid;
                high = mid - 1;
                
            }else if(arr[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return result;
    }
    
    int lastOccurance(vector<int>& arr, int target){
        int low = 0,high = arr.size() - 1, result = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == target){
                result = mid;
                low = mid + 1;
                
            }else if(arr[mid]<target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return result;
    }
      int countFreq(vector<int>& arr, int target) {
          // code here
          int first = firstOccurance(arr, target);
          if(first == -1) return 0;
          int last = lastOccurance(arr, target);
          return last - first + 1;
      }
  };