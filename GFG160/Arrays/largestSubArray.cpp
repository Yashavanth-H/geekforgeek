class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int, int> sumIndex;
        int maxLength=0, sum=0;
        
        for (int i=0; i<arr.size(); i++){
            int val=(arr[i] == 0) ? -1 : 1;
            
            sum += val;
            
            if(sum == 0){
                maxLength=i+1;
            }
            if(sumIndex.find(sum) != sumIndex.end()){
                maxLength = max(maxLength, i - sumIndex[sum]);
            }else{
                sumIndex[sum] = i;
            }
        }
        return maxLength;
    }
};