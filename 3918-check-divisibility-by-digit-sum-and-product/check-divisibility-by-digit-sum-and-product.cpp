class Solution {
public:
    bool checkDivisibility(int n) {
        int org=n;
        int sum=0,pro=1;
        while(n>0){
            int rem=n%10;
            sum+=rem;
            pro*=rem;
            n/=10;
        }
        int div=sum+pro;
        return org%div==0;
    }
};