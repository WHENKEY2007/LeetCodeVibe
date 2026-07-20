class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        int ok=0;
        int pre=1,suf=1;
        for(int i=0;i<n;i++){
            if(pre==0){
                pre=1;
            }
            if(suf==0){
                suf=1;
            }
            pre*=nums[i];
            suf*=nums[n-i-1];
            ok=max(pre,suf);
            ans=max(ok,ans);
        }
        return ans;
    }
};