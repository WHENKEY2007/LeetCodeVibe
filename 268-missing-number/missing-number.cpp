class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        for(auto i=0;i<=nums.size();i++){
            if(!m.count(i)){
                return i;
            }
        }
        return 0;
    }
};