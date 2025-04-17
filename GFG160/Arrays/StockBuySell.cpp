class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int maxProfit = 0;
          int buyDay = -1;
          for(int i=1; i<prices.size(); i++){
              if(prices[i-1]<prices[i]){
                  maxProfit += prices[i]-prices[i-1];
              }
          }
          return maxProfit;
      }
  };