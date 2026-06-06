class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum=nums[0];
        for(int val:nums){
            sum+=val;
            maxSum=max(maxSum,sum);
            if(sum<0){
                sum=0;
                }
        }
        return maxSum;

    }
};
