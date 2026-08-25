class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0;
        int high = 0;
        for (int i=0;i<weights.size();i++) {
            low=max(low, weights[i]);
            high+= weights[i];
        }
        while (low<=high) {
            int mid=low+(high-low)/2;
            int reqdays=1;
            int load=0;
            for (int w:weights) {
                if (load+w<= mid){
                    load+=w;
                }
                else {
                    reqdays++;
                    load=w;
                }
            }
            if(reqdays<=days){
                high=mid-1;
            }
            else {
                low=mid+1;
            }
        }
        return low;
    }
};