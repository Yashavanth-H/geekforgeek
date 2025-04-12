class Solution {
    public:
      void pushZerosToEnd(vector<int>& arr) {
          // code here
          int pos=0;
          for(int num:arr){
              if(num!=0){
                  arr[pos++]=num;
              }
          }
          while(pos<arr.size()){
              arr[pos++]=0;
          }
      }
  };
  