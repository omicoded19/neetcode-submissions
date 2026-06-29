class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        unordered_set<char>st;
        for(char c:s){
            if(st.count(c)){
                st.erase(c);
                count+=2;
            }
            else{
                st.insert(c);
            }
            
        }
        if(!st.empty()) count++;
        return count;
    }
};