class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<bool> vec(nums.size(),false);
        for(int num : nums) if(vec[num-1]==false) vec[num-1]=true;
        for(int i=0;i<nums.size();i++) if(vec[i]==false) ans.push_back(i+1);
        return ans;
    }
};