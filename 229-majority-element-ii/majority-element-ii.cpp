class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n=nums.size();
         vector<int>ans;
        unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto i:freq){
            if(i.second>n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};