
class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int min_price =  INT_MAX;
          int max_profit = 0;
          
          for(int price : prices){
              if(price < min_price){
                  min_price = price;
              }
              else{
                  max_profit = max(max_profit, price - min_price);
              }
          }
          return max_profit;
      }
  };