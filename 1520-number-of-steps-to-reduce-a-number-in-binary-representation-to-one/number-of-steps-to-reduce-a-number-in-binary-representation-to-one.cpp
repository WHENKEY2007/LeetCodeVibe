class Solution {
public:
    int numSteps(string s) {
        int st=0,carry=0;
        for(int i=s.length()-1;i>0;i--){
            int b=(s[i]-'0')+carry;
            if(b==1){
                st+=2;
                carry=1;
            }
            else{
                st+=1;
            }
        }
        if(carry==1){
            st+=1;
        }
        return st;
              
    }
};