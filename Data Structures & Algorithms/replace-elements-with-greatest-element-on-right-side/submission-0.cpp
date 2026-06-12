class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = -1;

        for(int i = arr.size() - 1; i >= 0; i--) {
            int curr = arr[i];      // save current value
            arr[i] = maxRight;      // replace with greatest on right
            maxRight = max(maxRight, curr);
        }

        return arr;
    }
};