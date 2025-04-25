class Solution {
    public:
      string addBinary(string& s1, string& s2) {
          // your code here
          int i = s1.size() - 1;
          int j = s2.size() - 1;
          int carry = 0;
          string result = "";
          
          while (i>=0 || j>=0 || carry){
              int bit1 = (i >= 0) ? s1[i--] - '0' : 0;
              int bit2 = (j >= 0) ? s2[j--] - '0' : 0;
              int sum = bit1 + bit2 + carry;
              
              result += (sum % 2) + '0';
              carry = sum / 2;
          }
          
          reverse(result.begin(), result.end());
          
          int start = 0;
          while(start < result.size() - 1 && result[start]=='0') start++;
              
          return result.substr(start);
      }
  };