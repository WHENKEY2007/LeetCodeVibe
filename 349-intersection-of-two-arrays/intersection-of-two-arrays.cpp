class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       unordered_set<int>s(nums1.begin(),nums1.end());
       unordered_set<int>res;
     for(int x : nums2){
        if(s.count(x)){
            res.insert(x);
        }
     }
     return vector<int>(res.begin(),res.end());
    }
};
