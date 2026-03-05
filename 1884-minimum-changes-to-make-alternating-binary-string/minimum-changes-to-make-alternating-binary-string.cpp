class Solution {
public:
    int minOperations(string s) {
        int f1=0,f2=0;
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                if(s[i]!='0') f1++;
                if(s[i]!='1') f2++;
            }
            else{
                if(s[i]!='1') f1++;
                if(s[i]!='0') f2++;
            }  
        }
         return min(f1,f2);
    }
};