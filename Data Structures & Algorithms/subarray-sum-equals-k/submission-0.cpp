class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1; // since prefix=0 comes only one time
        int prefix=0;
        int count=0; // yeh count krega kitne baar k sum hua
        for(int val:nums){
            prefix+=val; // start se end k sum
            // curr - prev =subarray sum
            count+=mpp[prefix-k]; // check krenge prefix-k kitni baar aaya
            mpp[prefix]++; // curr sum k track
        }
        return count;
    }
};