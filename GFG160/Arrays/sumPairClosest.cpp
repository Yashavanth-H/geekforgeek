class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        if(n<2) return {};
        
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n - 1;
        int closestDiff=INT_MAX;
        int maxAbsDiff = -1;
        vector<int> result;
        
        while(left<right){
            int sum = arr[left]+arr[right];
            int diff = abs(sum-target);
            
            if(diff < closestDiff || (diff == closestDiff && abs(arr[left]-arr[right]) > maxAbsDiff)){
                closestDiff=diff;
                maxAbsDiff=abs(arr[left]-arr[right]);
                result = {arr[left], arr[right]};
            }
            if(sum<target){
                ++left;
            }else{
                --right;
            }
        }
        return result;
    }
};