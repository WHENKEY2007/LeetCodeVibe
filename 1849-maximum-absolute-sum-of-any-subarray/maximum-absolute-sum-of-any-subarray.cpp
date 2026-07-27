class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxcur=0,maxsum=0;
        int mincur=0,minsum=0;
        for(int i=0;i<nums.size();i++){
            maxcur+=nums[i];
            maxsum=max(maxcur,maxsum);
            if(maxcur<0){
                maxcur=0;
            }
            mincur+=nums[i];
            minsum=min(mincur,minsum);
            if(mincur>0){
                mincur=0;
            }
        }
        return max(maxsum,abs(minsum));
    }
};