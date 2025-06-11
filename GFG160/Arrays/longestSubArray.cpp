class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> prefixMap;
        
        int sum=0, maxLen=0;
        
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            
            if(sum==k)
                maxLen=i+1;
                
            if(prefixMap.find(sum-k) != prefixMap.end())
                maxLen=max(maxLen, i - prefixMap[sum-k]);
            
            if(prefixMap.find(sum)==prefixMap.end())
                prefixMap[sum]=i;
        }
        return maxLen;
    }
};