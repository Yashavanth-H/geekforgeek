class Solution {
    public:
      void nextPermutation(vector<int>& arr) {
          // code here
          int i = arr.size()-2;
          
          while(i >= 0 && arr[i] >= arr[i+1]) i--;
          
          if(i>=0){
              int j = arr.size()-1;
              
              while(arr[j]<=arr[i]) j--;
              
              swap(arr[j], arr[i]);
          }
          reverse(arr.begin()+i+1, arr.end());
        }
  };