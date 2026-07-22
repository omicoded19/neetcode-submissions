class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int minn=INT_MAX;
        while(i<nums.size()){
            sum+=nums[i];
            while(sum>=target){
                sum-=nums[j];
                minn=min(i-j+1,minn);
                j++;
            }
            i++;
        }
        if(minn==INT_MAX) return 0;
        return minn;
    }
    
};