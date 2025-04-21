class Solution {
    public:
      // Function to find maximum product subarray
      int maxProduct(vector<int> &arr) {
          // Your Code Here
          int n = arr.size();
          int result = arr[0];
          int max_so_far = arr[0];
          int min_so_far = arr[0];
          
          for(int i=1; i<n; i++){
              int current = arr[i];
              
              if(current < 0) swap(max_so_far, min_so_far);
              
              max_so_far = max(current, max_so_far * current);
              min_so_far = min(current, min_so_far * current);
              
              result = max(result, max_so_far);
          }
          return result;
      }
  };