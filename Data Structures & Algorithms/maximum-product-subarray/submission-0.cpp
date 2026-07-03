class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // is question m hum min number bhi store krenge coz two neg = pos
        int maxi=nums[0];
        int currmin=nums[0];
        int currmax=nums[0];
        // since nums[0] initialized we start from i=1
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(currmax,currmin); // agar neg se mlt kra to min max bn skta aur max min
            }

            currmax=max(currmax*nums[i],nums[i]); // check krenge agar num ko mul krne pr max ho rh ya aise hi hai max
            currmin=min(currmin*nums[i],nums[i]);

            maxi=max(maxi,currmax);
        }
        return maxi;
    }
};
