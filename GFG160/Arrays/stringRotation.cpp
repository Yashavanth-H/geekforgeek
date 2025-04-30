
class Solution {
    public:
    
      vector<int> computeLps(string pat){
          int n = pat.size();
          vector<int> lps(n,0);
          int i = 1;
          int len = 0;
          
          while (i<n){
              if(pat[i] == pat[len]){
                  len++;
                  lps[i] = len;
                  i++;
              }
              else{
                  if(len != 0){
                      len = lps[len-1];
                  }else{
                      lps[i]=0;
                      i++;
                  }
              }
          }
          return lps;
      }
                      
                      
                      
                      
      bool KMP(string &text, string &pat){
          int n = text.size();
          int m = pat.size();
          int i = 0;
          int j = 0;
          
          vector<int> lps = computeLps(pat);
          while(i<n){
              if(text[i]==pat[j]){
                  i++; j++;
              }
              if(j == m){
                  return true;
              }
              else if(i<n && text[i] != pat[j]){
                  if(j != 0) j = lps[j-1];
                  else i++;
              }
          }
          return false;
      }
      // Function to check if two strings are rotations of each other or not.
      bool areRotations(string &s1, string &s2) {
          // Your code here
          if(s1.size() != s2.size()) return false;
          string temp = s1+s1;
          return KMP(temp, s2);
      }
  };