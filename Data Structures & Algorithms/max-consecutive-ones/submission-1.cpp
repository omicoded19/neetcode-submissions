class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxc=0;
        for(int val:nums){
            if(val==1){
                count++;
                maxc=max(maxc,count);
            }
            else{
                count=0;
            }
        }
        return maxc;
    }
};