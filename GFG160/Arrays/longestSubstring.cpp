class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char, int> lastIndex;
        int maxLen = 0, start=0;
        
        for(int end=0; end<s.length(); ++end){
            char current=s[end];
            if(lastIndex.find(current) != lastIndex.end()){
                start = max(start, lastIndex[current]+1);
            }
            lastIndex[current]=end;
            maxLen = max(maxLen, end-start+1);
        }
        return maxLen;
    }
};