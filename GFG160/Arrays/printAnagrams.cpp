class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> mp;
        
        for(const string& word : arr){
            string key = word;
            sort(key.begin(), key.end());
            mp[key].push_back(word);
        }
        
        vector<vector<string>> result;
        for(const string& word : arr){
            string key = word;
            sort(key.begin(), key.end());
            if(mp.count(key)){
                result.push_back(mp[key]);
                mp.erase(key);
            }
        }
        return result;
        
    }
};