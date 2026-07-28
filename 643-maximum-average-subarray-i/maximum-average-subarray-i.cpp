class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return (double)nums[0]/k;
        }
        int l=0,r=k-1,sum=0;
        
            for(int i=l;i<=r;i++)
            {
                sum+=nums[i];
            }
            int maxii=sum;
            while(r<n-1){
                sum-=nums[l];
                l++;
                r++;
                sum+=nums[r];
                maxii=max(maxii,sum);
            }
        return ((double)maxii/k);
    }
};