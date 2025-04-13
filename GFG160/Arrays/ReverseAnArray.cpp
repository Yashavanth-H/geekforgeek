class Solution {
    public:
      void reverseArray(vector<int> &arr) {
          // code here
          int i=0;
           int r = arr.size()-1;
           
           while(i<r){
               swap(arr[i++],arr[r--]);
           }
      }
  };