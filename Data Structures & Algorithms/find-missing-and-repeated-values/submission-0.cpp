class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_map<int,int>mpp;
        for(auto &row:grid){
            for(int val: row){
                mpp[val]++;
            }
        }
        int repeated=0;
        int missing=0;
        for(int i=1;i<=n*n;i++){
            if(mpp[i]==2) repeated=i;
            if(mpp[i]==0) missing=i;
        }
        return {repeated,missing};
    }
};