class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=n;
        while(true){
            int temp=ans;
            int pro=1;
            while(temp>0){
            int rem=temp%10;
            pro*=rem;
            temp/=10;
        }
        if(pro%t==0){
            return ans;
        }
            ans++;
        }
    }
};