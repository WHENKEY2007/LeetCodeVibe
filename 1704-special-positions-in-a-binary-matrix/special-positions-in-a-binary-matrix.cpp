class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r=mat.size(),c=mat[0].size();
        vector<int>rcnt(r,0);
        vector<int>ccnt(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    rcnt[i]++;
                    ccnt[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1&&rcnt[i]==1&&ccnt[j]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};