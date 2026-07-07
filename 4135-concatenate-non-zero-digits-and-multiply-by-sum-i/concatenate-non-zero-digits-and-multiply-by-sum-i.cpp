class Solution {
public:
    long long sumAndMultiply(int n) {
    if(n==0 || n==1){
        return n;
    }
    string s=to_string(n);
    string ans="";
    for(char i:s){
        if(i!='0'){
            ans+=i;
        }
    }
    long long x=stoi(ans);
    long long temp=x,sum=0;
    while(temp!=0){
        sum+=temp%10;
        temp/=10;
    }
    return x*sum;
    }
};