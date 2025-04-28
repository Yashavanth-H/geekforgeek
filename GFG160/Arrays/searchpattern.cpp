
class Solution {
    public:
    
      vector<int> computeLsp(string pat){
          int n = pat.size();
          vector<int> lsp(n, 0);
          
          int len = 0;
          int i = 1;
          
          while(i < n){
              if(pat[i] == pat[len]){
                  len++;
                  lsp[i] = len;
                  i++;
              }
              
              else{
                  if(len != 0){
                      len = lsp[len-1];
                  }
                  else{
                      lsp[i] = 0;
                      i++;
                  }
              }
          }
          return lsp;
      }
      vector<int> search(string& pat, string& txt) {
          // code here
          int n = txt.size();
          int m = pat.size();
          
          vector<int> lsp = computeLsp(pat);
          vector<int> ans;
          
          int i =0;
          int j =0;
          
          while(i<n){
              if(txt[i]==pat[j]){
                  i++;
                  j++;
              }
              
              if(j == m){
                  ans.push_back(i-j);
                  j=lsp[j-1];
              }
              else if(i<n && txt[i] != pat[j]){
                  if(j != 0){
                      j = lsp[j-1];
                  }
                  else{
                      i++;
                  }
              }
          }
              return ans;
          }
          
  };