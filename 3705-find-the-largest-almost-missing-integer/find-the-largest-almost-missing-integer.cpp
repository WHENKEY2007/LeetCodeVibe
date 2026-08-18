class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        //Calculate the frequency of each ele since nums[i]<50
        vector<int> freq(51, 0);
        for (int x : nums) freq[x]++;
        if (k == n) return *max_element(nums.begin(), nums.end());
        if (k == 1) {
            int best = -1;
            for (int x : nums)
                if (freq[x] == 1) best = max(best, x);
            return best;
        }
        int best = -1;
        if (freq[nums[0]] == 1)   best = max(best, nums[0]);
        if (freq[nums[n-1]] == 1) best = max(best, nums[n-1]);
        return best;
    }
};