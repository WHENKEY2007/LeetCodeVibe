class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        vector<pair<int,int>>v;
        unordered_map<int,int>m;
        for(int i:nums){
            m[i]++;
        }
        for(auto i:m)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};