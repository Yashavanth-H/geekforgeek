class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> prefixSumCount;
         int count = 0, sum = 0;
         
         prefixSumCount[0] = 1;
         for(int i = 0; i < arr.size(); i++){
             sum+= arr[i];
             
             if(prefixSumCount.find(sum - k) != prefixSumCount.end()){
                 count += prefixSumCount[sum - k];
             }
             
             prefixSumCount[sum]++;
         }
         return count;
    }
};