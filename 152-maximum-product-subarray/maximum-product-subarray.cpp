class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int minpro=nums[0],maxpro=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxpro,minpro);
            }
            maxpro=max(nums[i],nums[i]*maxpro);
            minpro=min(nums[i],nums[i]*minpro);
            ans=max(ans,maxpro);
        }
        return ans;
     } 
};