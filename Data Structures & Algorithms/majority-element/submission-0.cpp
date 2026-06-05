class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int val:nums){
            mpp[val]++;
        }
        for(int val:nums){
            if(mpp[val]>nums.size()/2){
                return val;
            }
        }
        return 0;
        
    }
};