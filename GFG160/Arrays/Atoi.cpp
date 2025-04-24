
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int i = 0;
    long result = 0;
    int sign = 1;

    // Step 1: Skip leading whitespaces
    while (s[i] == ' ') i++;

    // Step 2: Check for sign
    if (s[i] == '+' || s[i] == '-') {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Step 3: Read digits
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // Step 4: Clamp result
        if (sign * result > INT_MAX) return INT_MAX;
        if (sign * result < INT_MIN) return INT_MIN;

        i++;
    }

    return sign * result;
    }
};
