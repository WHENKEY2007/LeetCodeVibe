class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int l=0,r=k-1;
        int sum=0;
        for(int i=l;i<=r;i++){
            sum+=arr[i];
        }
        int cnt=0;
        int avg=0;
        while(r<n){
            avg=sum/k;
            if(avg>=threshold){
                cnt++;
            }
            sum-=arr[l];
            l++;
            r++;
            if(r<n){
            sum+=arr[r];
            }
        }
        return cnt;
    }
};