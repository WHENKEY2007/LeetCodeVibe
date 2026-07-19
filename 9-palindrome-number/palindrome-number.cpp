class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0&&x<9){
            return true;
        }
        long long temp=x;
        long long rem,rev=0;
        while(temp!=0){
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        if(rev==x && x>0)
        return true;
        else
        return false;
    }
};