class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        vector<int>temp2;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
        else{
            temp2.push_back(nums[i]);
        }
    }
     temp.insert(temp.end(),temp2.begin(),temp2.end());
     nums=temp;
    }
};
