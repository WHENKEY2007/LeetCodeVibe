class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        int ans=0;
        vector<int>v;
        int cnt=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
       while(cnt<=n+1){
        if(s.contains(cnt)){
           cnt++; 
        }
        else{
            return cnt;
        }
    }
        return 0;
    }
};