class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int n = arr.size();
        int left = 0, right = n - 1;
        int count = 0;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                if (arr[left] == arr[right]) {
                    int len = right - left + 1;
                    count += (len * (len - 1)) / 2;
                    break;
                } else {
                    int leftCount = 1;
                    int rightCount = 1;

                    while (left + 1 < right && arr[left] == arr[left + 1]) {
                        leftCount++;
                        left++;
                    }

                    while (right - 1 > left && arr[right] == arr[right - 1]) {
                        rightCount++;
                        right--;
                    }

                    count += leftCount * rightCount;
                    left++;
                    right--;
                }
            }
        }

        return count;
    }
};
