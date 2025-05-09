class Solution {
    public:
      int findMin(vector<int>& arr) {
          int low = 0, high = arr.size() - 1;
  
          while (low < high) {
              int mid = low + (high - low) / 2;
  
              // If mid element is greater than the last element,
              // the minimum must be in the right half.
              if (arr[mid] > arr[high]) {
                  low = mid + 1;
              }
              // Else, the minimum is in the left half (including mid).
              else {
                  high = mid;
              }
          }
  
          // After the loop, low == high and points to the minimum
          return arr[low];
      }
  };
  