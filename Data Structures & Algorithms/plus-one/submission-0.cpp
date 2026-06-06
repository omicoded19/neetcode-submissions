class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans(n);
        int carry = 1; // we need to add 1
        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            ans[i] = sum % 10;
            carry = sum / 10;
        }
        // if carry is still left
        if (carry) {
            ans.insert(ans.begin(), carry);
        }

        return ans;
    }
};