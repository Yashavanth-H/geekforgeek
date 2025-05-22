class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_set<int> seen;
        for(int num : arr){
            int complement = target - num;
            if(seen.count(complement)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};