class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);
        int window = 2*k+1;
        if(window>n){
            return ans;
        }
        long long sum=0;
        for (int i=0;i<window;i++) {
            sum+=nums[i];
        }
        ans[k]=sum/window;
        for (int r=window;r<n;r++) {
            sum+=nums[r];
            sum-=nums[r-window];
            int center=r-k;
            ans[center]=sum/window;
        }
        return ans;
    }
};