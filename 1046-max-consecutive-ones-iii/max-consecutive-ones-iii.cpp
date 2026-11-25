class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int z=0;
        int maxl=0;
        while (r<n) {
            if (nums[r] == 0) {
                z++;
            }
            while (z > k) {
                if (nums[l] == 0) {
                    z--;
                }
                l++;
            }
            int len = r-l+1;
            maxl = max(maxl, len);
            r++;
        }
        return maxl;
    }
};