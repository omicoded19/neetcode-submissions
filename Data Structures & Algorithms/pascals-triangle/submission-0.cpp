class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){ // creates rows 0 1 2 ....
            vector<int>rows(i+1,1); // for 0th row-> 1 , 1st -> 1,1 2nd-> 1,1,1
            for(int j=1;j<i;j++){
                rows[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(rows);
        }
        return ans;
    }
};