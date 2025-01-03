class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i <= n; i++) { // Iterate from 0 to n
            int flag = 0;
            for (int j = 0; j < n; j++) { // Check if `i` exists in nums
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) { // If `i` is not found, it’s the missing number
                return i;
            }
        }
        return -1; // Fallback return (should not happen for valid input)
    }
};
