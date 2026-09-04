class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                mp1[s[i]]++;
            }
            else{
                mp2[s[i]]++;
            }
        }
        int mo=0,mc=0;
        for(auto i:mp1){
            if(i.second>mo){
                mo=i.second;
            }
        }
        for(auto i:mp2){
            if(i.second>mc){
                mc=i.second;
            }
        }
        return mo+mc;
    }
};