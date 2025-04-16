//{ Driver Code Starts
#include <iostream>
#include <vector>
#include <map>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here
        map<int, int> mp;
        int n = arr.size();
        for(auto nums: arr){
            mp[nums]++;
        }
        vector<int> ans;
        for(auto m: mp){
            if(m.second>n/3) ans.push_back(m.first);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends