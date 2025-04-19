
class Solution {
    public:
      int getMinDiff(vector<int> &arr, int k) {
          // code here
          sort(arr.begin(), arr.end());
          int n = arr.size();
          int result = arr[n-1] - arr[0];
          int small = arr[0]+k;
          int large = arr[n-1]-k;
          for(int i=0; i<n-1; i++){
              int cur_min = min(arr[i+1]-k, small);
              int cur_max = max(arr[i]+k, large);
              if(cur_min<0) continue;
              result = min(result, cur_max-cur_min);
          }
          return result;
      }
  };