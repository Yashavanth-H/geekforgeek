class Solution {
    public:
      int getSecondLargest(vector<int> &arr) {
          // code here
          int ans = -1;
          int lrgst = arr[0];
          for(int i=1; i<arr.size(); i++){
              if(arr[i]>lrgst){
                  ans = lrgst;
                  lrgst = arr[i];
              }
              if(ans<arr[i] && lrgst>arr[i]){
                  ans = arr[i];
              }
          }
          return ans;
  
      }
  };
  