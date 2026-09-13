class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i,j;
        for(i=0;i<arr.size();i++){
            for(j=arr.size()-1;j>=0;j--){
                if(i!=j && arr[i]==2*arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};