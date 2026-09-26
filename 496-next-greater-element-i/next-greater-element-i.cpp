class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> map;
        int i = n-1;
        stack<int> stack;

        while(i>=0){
            while(!stack.empty() && nums2[i] >= stack.top()){
                stack.pop();
            }

            if(stack.empty()){
                map[nums2[i]] = -1;
                stack.push(nums2[i]);
                i--;
            }else{
                map[nums2[i]] = stack.top();
                stack.push(nums2[i]);
                i--;
            }
        }
        vector<int> ans;
        for(int j=0; j<nums1.size(); j++){
            int nextGreater = map[nums1[j]];
            ans.push_back(nextGreater);
        }
        return ans;
    }
};