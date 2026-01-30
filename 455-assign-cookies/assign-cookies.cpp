class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gsi=g.size(),ssi=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt=0;
        if(ssi!=0){
        if(s[ssi-1]<g[0])
            return 0;}
        for(int j=0;j<ssi;j++){
            for(int i=cnt;i<gsi;i++){
                if(s[j]>=g[i]){
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};