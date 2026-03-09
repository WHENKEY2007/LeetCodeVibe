class Solution {
public:
    int dominantIndex(vector<int>& nums) {
    int n=nums.size();
    int maxi,max=nums[0],i;
    for(i=0;i<n;i++){
        if(nums[i]>max){
            max=nums[i];
            maxi=i;
        }
    }
   for(i=0;i<n;i++){
        if(max>=2*nums[i])
        continue;
        else if(max==nums[i])
        continue;
        else return -1;
  }
  return maxi;
    } 
};