class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nge(n, -1);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums2[j] > nums2[i]) {
                    nge[i] = nums2[j];
                    break;
                }
            }
        }
        vector<int> ans;

        for (int num : nums1) {
            for (int i = 0; i < n; i++) {
                if (nums2[i] == num) {
                    ans.push_back(nge[i]);
                    break;
                }
            }
        }

        return ans;
    }
};