class Solution {
    public:
      int minChar(string& s) {
          // Write your code here
          string rev = s;
          reverse(rev.begin(), rev.end());
          string temp = s + "$" + rev;
          
          vector<int> lps(temp.size(), 0);
          
          for(int i = 1; i < temp.size(); i++){
              int len = lps[i - 1];
              while(len > 0 && temp[i] != temp[len])
                  len = lps[len - 1];
              if(temp[i] == temp[len])
                  len++;
              lps[i] = len;
          }
          return s.size() - lps.back();
      }
  };