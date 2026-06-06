class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int val:nums){
            mpp[val]++;
        }
        for(int val:nums){
            if(mpp[val]==1){
                return val;
            }
        }
        return -1;
        
    }
};