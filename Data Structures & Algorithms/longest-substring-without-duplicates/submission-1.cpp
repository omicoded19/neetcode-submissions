class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) { //Agar current character s[right] already 
            // set mein present hai, matlab duplicate aa gaya
                st.erase(s[left]); //Tab hum left side se characters remove 
                 // karte rahenge jab tak duplicate hat nahi jaata.
                left++;
            }
            st.insert(s[right]);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};