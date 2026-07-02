class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;          // Pivot index store karega
        int n=nums.size();    

        // Right se pehla index find karo jahan nums[i]<nums[i+1]
        // Ye wahi position hai jahan change karke next greater permutation bana sakte hain
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }

        // Agar pivot nahi mila, array descending order mein hai
        // Example: [3,2,1]
        // Iski next permutation smallest permutation [1,2,3] hogi
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // Right side se pivot se thoda bada element find karo
        // Suffix descending order mein hai, isliye right se pehla greater
        // element pivot se smallest greater element hoga
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        // Pivot ke baad wala portion reverse karo
        // Taaki suffix minimum possible order mein aa jaye
        reverse(nums.begin()+index+1,nums.end());
    }
};