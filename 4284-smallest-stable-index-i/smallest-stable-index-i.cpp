class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int si=nums.size();
        vector<int>p(si);
        vector<int>s(si);
        p[0]=nums[0];   
        for(int i=1;i<si;i++){
        p[i]=max(p[i-1],nums[i]);
        }
        s[si-1]=nums[si-1];
        for(int i=si-2;i>=0;i--){
            s[i]=min(s[i+1],nums[i]);
        }
        for(int i=0;i<si;i++){
            if(p[i]-s[i]<=k){
                return i;
            }
        }
        return -1;
    }
};