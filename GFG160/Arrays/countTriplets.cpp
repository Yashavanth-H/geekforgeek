class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        int n = arr.size();
        int count = 0;
        
        for(int i = 0; i < n - 2; ++i){
            int j = i + 1;
            int k = n - 1;
            
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                
                if(sum == target){
                    if(arr[j] == arr[k]){
                        int len = k - j + 1;
                        count += (len * (len-1))/2;
                        break;
                    }
                    int left = 1,right = 1;
                    
                    while(j+1<k && arr[j] == arr[j+1]){
                        ++left;
                        ++j;
                    }
                    while(j+1<k && arr[k]==arr[k-1]){
                        ++right;
                        --k;
                    }
                    count += left * right;
                    ++j;
                    --k;
                }
                else if(sum<target){
                    ++j;
                }else{
                    --k;
                }
            }
        }
        return count;
    }
};