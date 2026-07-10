class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(char i:s){
            mp[i]++;
        }
        int f=mp.begin()->second;
        for(auto i:mp){
            if(i.second!=f){
                return false;
            }
        }
        return true;
    }
};