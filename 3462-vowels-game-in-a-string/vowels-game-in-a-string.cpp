class Solution {
public:
    bool doesAliceWin(string s) {
        for(char i:s){
            if(i=='a'||i=='e'||i=='o'||i=='i'||i=='u'){
                return true;
            }
        }
        return false;
    }      
}; 