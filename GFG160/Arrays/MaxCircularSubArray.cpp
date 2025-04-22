
class Solution {
    public:
      // arr: input array
      int kadaneMin(const vector<int>& arr){
          int min_ending_here = arr[0], min_so_far = arr[0];
          for(int i=1; i<arr.size(); i++){
              min_ending_here = min(arr[i], min_ending_here + arr[i]);
              min_so_far = min(min_so_far, min_ending_here);
          }
          return min_so_far;
      }
      
      int kadaneMax(const vector<int>& arr){
          int max_ending_here = arr[0], max_so_far = arr[0];
          for(int i =1; i<arr.size(); i++){
              max_ending_here = max(arr[i], max_ending_here + arr[i]);
              max_so_far = max(max_so_far, max_ending_here);
          }
          return max_so_far;
      }
      // Function to find maximum circular subarray sum.
      int circularSubarraySum(vector<int> &arr) {
  
          // your code here
          int max_kadane = kadaneMax(arr);
          int min_kadane = kadaneMin(arr);
          int total_sum = 0;
          
          for(int num : arr)
              total_sum+=num;
          int max_wrap = total_sum - min_kadane;
          
          if(max_wrap == 0)
              return max_kadane;
          return max(max_kadane, max_wrap);
          
      }
  };