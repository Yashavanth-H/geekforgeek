class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> xorFreq;
        
        int count = 0;
        int xorVal = 0;
        
        for(int i = 0; i < arr.size(); ++i){
            xorVal ^= arr[i];
            
            if(xorVal == k)
                count++;
                
            int required = xorVal ^ k;
            if(xorFreq.find(required)!=xorFreq.end()){
                count += xorFreq[required];
            }
            xorFreq[xorVal]++;
        }
        return count;
    }
};