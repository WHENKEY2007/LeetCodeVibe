class Solution {
public:
    vector<int> distributeCandies(int candies, int num) {
        vector<int> ans(num,0);
        int give = 1;
        int i = 0;
        while(candies > 0){
            ans[i % num] += min(give, candies);
            candies -= give;
            give++;
            i++;
        }
        return ans;
    }
};