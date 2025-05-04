
class Solution {
    public:
      vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
          // Code here
          vector<vector<int>> merged;
          if(arr.empty()) return merged;
          
          sort(arr.begin(), arr.end());
          
          merged.push_back(arr[0]);
          
          for(int i = 1; i < arr.size(); ++i){
              vector<int>& last = merged.back();
              if(arr[i][0] <= last[1]){
                  last[1] = max(last[1], arr[i][1]);
              }else{
                  merged.push_back(arr[i]);
              }
          }
          return merged;
      }
  };