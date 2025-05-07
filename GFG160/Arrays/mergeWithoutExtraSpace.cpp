class Solution {
    public:
      void mergeArrays(vector<int>& a, vector<int>& b) {
          // code here
          int n = a.size(), m = b.size();
          int total = n + m;
          int gap = (total + 1) / 2;
          
          auto nextGap = [](int gap){
              return (gap<=1) ? 0 : (gap + 1) / 2;
          };
          
          while (gap > 0){
              int i = 0;
              int j = gap;
              
              while(j < total){
                  int &val_i = (i < n) ? a[i] : b[i-n];
                  int &val_j = (j < n) ? a[j] : b[j-n];
                  
                  if(val_i > val_j)
                      swap(val_i, val_j);
                      
                  i++;
                  j++;
              }
              gap = nextGap(gap);
          }
      }
  };
  