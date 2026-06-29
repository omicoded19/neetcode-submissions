class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        bool odd=false;
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        for(auto &it:mp){
            if(it.second%2==0){
                count+=it.second;
            }
            else{
                count+=it.second-1;
                odd=true;
            }

        }
        if(odd) count++;
        return count;
    }
};