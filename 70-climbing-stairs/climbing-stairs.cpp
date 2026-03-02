class Solution {
public:
    int climbStairs(int n) {
        if(n==1|| n==2){
            return n;
        }
     int cur,p2=1,p1=2;
     for(int i=3;i<=n;i++){
        cur=p1+p2;
        p2=p1;
        p1=cur;
     }
     return cur;    
    }
};