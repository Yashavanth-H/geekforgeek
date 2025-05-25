class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        unordered_set<int> setA(a.begin(), a.end());  // Store unique elements of a[]
        unordered_set<int> result;

        for (int num : b) {
            if (setA.count(num)) {
                result.insert(num);  // Insert into result if present in setA
            }
        }

        return vector<int>(result.begin(), result.end());  // Convert set to vector
    }
};
