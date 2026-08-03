class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max=0,water=0;
        int l=0,r=n-1;
        while(l<r){
            water=min(height[r],height[l])*(r-l);
            if(water>max){
                max=water;
            }
        if(height[l]<height[r]) l++;
        else r--;
        
        }
    return max;
    }
};