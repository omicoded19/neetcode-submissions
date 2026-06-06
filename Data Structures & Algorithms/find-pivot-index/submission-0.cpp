class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum=0;
        int leftSum=0;
        for(int val:nums){
            rightSum+=val;
        }
        for(int i=0;i<nums.size();i++){
            rightSum-=nums[i];
            if(rightSum==leftSum) return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};