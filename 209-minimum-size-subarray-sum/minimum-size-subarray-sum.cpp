class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int sum = 0;
        int minl = INT_MAX;
        for (int r=0;r<n;r++) {
            sum+=nums[r];
            while (sum >= target) {
                int len=r-l+1;
                minl = min(minl, len);
                sum -= nums[l];
                l++;
            }
        }
        if (minl == INT_MAX)
            return 0;
        return minl;
    }
};