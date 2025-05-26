class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> unionSet;
        for(int val : a){
            unionSet.insert(val);
        }
        
        for(int val : b){
            unionSet.insert(val);
        }
        
        return unionSet.size();
    }
};