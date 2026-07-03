class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>ans;
        set<float>st;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                float sol=i/(j*1.000);
                if(st.find(sol)==st.end())
                {
                    string s=to_string(i) +"/"+ to_string(j);
                    st.insert(sol);
                    ans.push_back(s);
                }   
            }
        }
        return ans;
    }
};