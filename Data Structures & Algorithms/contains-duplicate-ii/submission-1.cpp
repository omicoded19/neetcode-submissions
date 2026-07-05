class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++){
            if(mp.contains(nums[i])){
                if(i - mp[nums[i]] <= k){
                    return true;
                }
            }
            mp[nums[i]] = i;
        }

        return false;
    }
};
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]==nums[j] && abs(i-j)<=k){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };